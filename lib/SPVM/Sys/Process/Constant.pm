package SPVM::Sys::Process::Constant;

1;

=head1 Name

SPVM::Sys::Process::Constant - Sys::Process::Constant is a SPVM module

=head1 Usage

  use Sys::Process::Constant as Proc;
  
  my $value = Proc->EXIT_FAILURE;
  
=head1 Description

C<Sys::Process::Constant> is a L<SPVM> module.

=head1 Class Methods

=head2 EXIT_FAILURE

  static method EXIT_FAILURE : int ();

Get the constant value of C<EXIT_FAILURE>. If the system doesn't define this constant, an exception will be thrown. The error code is set to the class id of the L<Error::NotSupported|SPVM::Error::NotSupported> class.

=head2 EXIT_SUCCESS

  static method EXIT_SUCCESS : int ();

Get the constant value of C<EXIT_SUCCESS>. If the system doesn't define this constant, an exception will be thrown. The error code is set to the class id of the L<Error::NotSupported|SPVM::Error::NotSupported> class.

=head1 Copyright & License

Copyright 2022-2022 Yuki Kimoto, all rights reserved.

This program is free software; you can redistribute it and/or modify it
under the same terms as Perl itself.

