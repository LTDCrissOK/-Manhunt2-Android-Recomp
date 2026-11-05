#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BF50
// Address: 0x19bf50 - 0x19c040
void sub_0019BF50_0x19bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BF50_0x19bf50");
#endif

    switch (ctx->pc) {
        case 0x19bf50u: goto label_19bf50;
        case 0x19bf54u: goto label_19bf54;
        case 0x19bf58u: goto label_19bf58;
        case 0x19bf5cu: goto label_19bf5c;
        case 0x19bf60u: goto label_19bf60;
        case 0x19bf64u: goto label_19bf64;
        case 0x19bf68u: goto label_19bf68;
        case 0x19bf6cu: goto label_19bf6c;
        case 0x19bf70u: goto label_19bf70;
        case 0x19bf74u: goto label_19bf74;
        case 0x19bf78u: goto label_19bf78;
        case 0x19bf7cu: goto label_19bf7c;
        case 0x19bf80u: goto label_19bf80;
        case 0x19bf84u: goto label_19bf84;
        case 0x19bf88u: goto label_19bf88;
        case 0x19bf8cu: goto label_19bf8c;
        case 0x19bf90u: goto label_19bf90;
        case 0x19bf94u: goto label_19bf94;
        case 0x19bf98u: goto label_19bf98;
        case 0x19bf9cu: goto label_19bf9c;
        case 0x19bfa0u: goto label_19bfa0;
        case 0x19bfa4u: goto label_19bfa4;
        case 0x19bfa8u: goto label_19bfa8;
        case 0x19bfacu: goto label_19bfac;
        case 0x19bfb0u: goto label_19bfb0;
        case 0x19bfb4u: goto label_19bfb4;
        case 0x19bfb8u: goto label_19bfb8;
        case 0x19bfbcu: goto label_19bfbc;
        case 0x19bfc0u: goto label_19bfc0;
        case 0x19bfc4u: goto label_19bfc4;
        case 0x19bfc8u: goto label_19bfc8;
        case 0x19bfccu: goto label_19bfcc;
        case 0x19bfd0u: goto label_19bfd0;
        case 0x19bfd4u: goto label_19bfd4;
        case 0x19bfd8u: goto label_19bfd8;
        case 0x19bfdcu: goto label_19bfdc;
        case 0x19bfe0u: goto label_19bfe0;
        case 0x19bfe4u: goto label_19bfe4;
        case 0x19bfe8u: goto label_19bfe8;
        case 0x19bfecu: goto label_19bfec;
        case 0x19bff0u: goto label_19bff0;
        case 0x19bff4u: goto label_19bff4;
        case 0x19bff8u: goto label_19bff8;
        case 0x19bffcu: goto label_19bffc;
        case 0x19c000u: goto label_19c000;
        case 0x19c004u: goto label_19c004;
        case 0x19c008u: goto label_19c008;
        case 0x19c00cu: goto label_19c00c;
        case 0x19c010u: goto label_19c010;
        case 0x19c014u: goto label_19c014;
        case 0x19c018u: goto label_19c018;
        case 0x19c01cu: goto label_19c01c;
        case 0x19c020u: goto label_19c020;
        case 0x19c024u: goto label_19c024;
        case 0x19c028u: goto label_19c028;
        case 0x19c02cu: goto label_19c02c;
        case 0x19c030u: goto label_19c030;
        case 0x19c034u: goto label_19c034;
        case 0x19c038u: goto label_19c038;
        case 0x19c03cu: goto label_19c03c;
        default: break;
    }

    ctx->pc = 0x19bf50u;

label_19bf50:
    // 0x19bf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19bf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19bf54:
    // 0x19bf54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19bf58:
    // 0x19bf58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19bf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19bf5c:
    // 0x19bf5c: 0xc061a12  jal         func_186848
label_19bf60:
    if (ctx->pc == 0x19BF60u) {
        ctx->pc = 0x19BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF5Cu;
        // 0x19bf60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BF64u;
        goto label_19bf64;
    }
    ctx->pc = 0x19BF5Cu;
    SET_GPR_U32(ctx, 31, 0x19BF64u);
    ctx->pc = 0x19BF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF5Cu;
    // 0x19bf60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19BF5Cu, 0x19BF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF64u;
label_19bf64:
    // 0x19bf64: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19bf68:
    // 0x19bf68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19bf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19bf6c:
    // 0x19bf6c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19bf70:
    // 0x19bf70: 0x40f809  jalr        $v0
label_19bf74:
    if (ctx->pc == 0x19BF74u) {
        ctx->pc = 0x19BF78u;
        goto label_19bf78;
    }
    ctx->pc = 0x19BF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BF78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BF70u, 0x19BF78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BF78u;
label_19bf78:
    // 0x19bf78: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_19bf7c:
    if (ctx->pc == 0x19BF7Cu) {
        ctx->pc = 0x19BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF78u;
        // 0x19bf7c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BF80u;
        goto label_19bf80;
    }
    ctx->pc = 0x19BF78u;
    {
        const bool branch_taken_0x19bf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bf78) {
            ctx->pc = 0x19BF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BF78u;
            // 0x19bf7c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BFBCu;
            goto label_19bfbc;
        }
    }
    ctx->pc = 0x19BF80u;
label_19bf80:
    // 0x19bf80: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x19bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19bf84:
    // 0x19bf84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19bf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19bf88:
    // 0x19bf88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19bf88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19bf8c:
    // 0x19bf8c: 0xc60200bc  lwc1        $f2, 0xBC($s0)
    ctx->pc = 0x19bf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19bf90:
    // 0x19bf90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19bf90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19bf94:
    // 0x19bf94: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x19bf94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19bf98:
    // 0x19bf98: 0x0  nop
    ctx->pc = 0x19bf98u;
    // NOP
label_19bf9c:
    // 0x19bf9c: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_19bfa0:
    if (ctx->pc == 0x19BFA0u) {
        ctx->pc = 0x19BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF9Cu;
        // 0x19bfa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFA4u;
        goto label_19bfa4;
    }
    ctx->pc = 0x19BF9Cu;
    {
        const bool branch_taken_0x19bf9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bf9c) {
            ctx->pc = 0x19BFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BF9Cu;
            // 0x19bfa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C034u;
            goto label_19c034;
        }
    }
    ctx->pc = 0x19BFA4u;
label_19bfa4:
    // 0x19bfa4: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x19bfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19bfa8:
    // 0x19bfa8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x19bfa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19bfac:
    // 0x19bfac: 0x0  nop
    ctx->pc = 0x19bfacu;
    // NOP
label_19bfb0:
    // 0x19bfb0: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
label_19bfb4:
    if (ctx->pc == 0x19BFB4u) {
        ctx->pc = 0x19BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFB0u;
        // 0x19bfb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFB8u;
        goto label_19bfb8;
    }
    ctx->pc = 0x19BFB0u;
    {
        const bool branch_taken_0x19bfb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bfb0) {
            ctx->pc = 0x19BFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BFB0u;
            // 0x19bfb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C034u;
            goto label_19c034;
        }
    }
    ctx->pc = 0x19BFB8u;
label_19bfb8:
    // 0x19bfb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19bfbc:
    // 0x19bfbc: 0x8c621050  lw          $v0, 0x1050($v1)
    ctx->pc = 0x19bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4176)));
label_19bfc0:
    // 0x19bfc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19bfc4:
    if (ctx->pc == 0x19BFC4u) {
        ctx->pc = 0x19BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFC0u;
        // 0x19bfc4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFC8u;
        goto label_19bfc8;
    }
    ctx->pc = 0x19BFC0u;
    {
        const bool branch_taken_0x19bfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFC0u;
        // 0x19bfc4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bfc0) {
            ctx->pc = 0x19BFE4u;
            goto label_19bfe4;
        }
    }
    ctx->pc = 0x19BFC8u;
label_19bfc8:
    // 0x19bfc8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x19bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_19bfcc:
    // 0x19bfcc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_19bfd0:
    if (ctx->pc == 0x19BFD0u) {
        ctx->pc = 0x19BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFCCu;
        // 0x19bfd0: 0x8c821050  lw          $v0, 0x1050($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFD4u;
        goto label_19bfd4;
    }
    ctx->pc = 0x19BFCCu;
    {
        const bool branch_taken_0x19bfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bfcc) {
            ctx->pc = 0x19BFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BFCCu;
            // 0x19bfd0: 0x8c821050  lw          $v0, 0x1050($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BFE8u;
            goto label_19bfe8;
        }
    }
    ctx->pc = 0x19BFD4u;
label_19bfd4:
    // 0x19bfd4: 0xc0672f6  jal         func_19CBD8
label_19bfd8:
    if (ctx->pc == 0x19BFD8u) {
        ctx->pc = 0x19BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFD4u;
        // 0x19bfd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFDCu;
        goto label_19bfdc;
    }
    ctx->pc = 0x19BFD4u;
    SET_GPR_U32(ctx, 31, 0x19BFDCu);
    ctx->pc = 0x19BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BFD4u;
    // 0x19bfd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CBD8u, 0x19BFD4u, 0x19BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFDCu;
label_19bfdc:
    // 0x19bfdc: 0x10000015  b           . + 4 + (0x15 << 2)
label_19bfe0:
    if (ctx->pc == 0x19BFE0u) {
        ctx->pc = 0x19BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFDCu;
        // 0x19bfe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFE4u;
        goto label_19bfe4;
    }
    ctx->pc = 0x19BFDCu;
    {
        const bool branch_taken_0x19bfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFDCu;
        // 0x19bfe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bfdc) {
            ctx->pc = 0x19C034u;
            goto label_19c034;
        }
    }
    ctx->pc = 0x19BFE4u;
label_19bfe4:
    // 0x19bfe4: 0x8c821050  lw          $v0, 0x1050($a0)
    ctx->pc = 0x19bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4176)));
label_19bfe8:
    // 0x19bfe8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19bfec:
    if (ctx->pc == 0x19BFECu) {
        ctx->pc = 0x19BFF0u;
        goto label_19bff0;
    }
    ctx->pc = 0x19BFE8u;
    {
        const bool branch_taken_0x19bfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bfe8) {
            ctx->pc = 0x19C000u;
            goto label_19c000;
        }
    }
    ctx->pc = 0x19BFF0u;
label_19bff0:
    // 0x19bff0: 0xc0675e0  jal         func_19D780
label_19bff4:
    if (ctx->pc == 0x19BFF4u) {
        ctx->pc = 0x19BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFF0u;
        // 0x19bff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFF8u;
        goto label_19bff8;
    }
    ctx->pc = 0x19BFF0u;
    SET_GPR_U32(ctx, 31, 0x19BFF8u);
    ctx->pc = 0x19BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BFF0u;
    // 0x19bff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D780u, 0x19BFF0u, 0x19BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFF8u;
label_19bff8:
    // 0x19bff8: 0x1000000e  b           . + 4 + (0xE << 2)
label_19bffc:
    if (ctx->pc == 0x19BFFCu) {
        ctx->pc = 0x19BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFF8u;
        // 0x19bffc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C000u;
        goto label_19c000;
    }
    ctx->pc = 0x19BFF8u;
    {
        const bool branch_taken_0x19bff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFF8u;
        // 0x19bffc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bff8) {
            ctx->pc = 0x19C034u;
            goto label_19c034;
        }
    }
    ctx->pc = 0x19C000u;
label_19c000:
    // 0x19c000: 0xc061a1e  jal         func_186878
label_19c004:
    if (ctx->pc == 0x19C004u) {
        ctx->pc = 0x19C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C000u;
        // 0x19c004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C008u;
        goto label_19c008;
    }
    ctx->pc = 0x19C000u;
    SET_GPR_U32(ctx, 31, 0x19C008u);
    ctx->pc = 0x19C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C000u;
    // 0x19c004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19C000u, 0x19C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C008u;
label_19c008:
    // 0x19c008: 0xc06e0e6  jal         func_1B8398
label_19c00c:
    if (ctx->pc == 0x19C00Cu) {
        ctx->pc = 0x19C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C008u;
        // 0x19c00c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C010u;
        goto label_19c010;
    }
    ctx->pc = 0x19C008u;
    SET_GPR_U32(ctx, 31, 0x19C010u);
    ctx->pc = 0x19C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C008u;
    // 0x19c00c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x19C008u, 0x19C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C010u;
label_19c010:
    // 0x19c010: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19c014:
    if (ctx->pc == 0x19C014u) {
        ctx->pc = 0x19C018u;
        goto label_19c018;
    }
    ctx->pc = 0x19C010u;
    {
        const bool branch_taken_0x19c010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c010) {
            ctx->pc = 0x19C028u;
            goto label_19c028;
        }
    }
    ctx->pc = 0x19C018u;
label_19c018:
    // 0x19c018: 0xc067258  jal         func_19C960
label_19c01c:
    if (ctx->pc == 0x19C01Cu) {
        ctx->pc = 0x19C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C018u;
        // 0x19c01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C020u;
        goto label_19c020;
    }
    ctx->pc = 0x19C018u;
    SET_GPR_U32(ctx, 31, 0x19C020u);
    ctx->pc = 0x19C01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C018u;
    // 0x19c01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C960u, 0x19C018u, 0x19C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C020u;
label_19c020:
    // 0x19c020: 0x10000004  b           . + 4 + (0x4 << 2)
label_19c024:
    if (ctx->pc == 0x19C024u) {
        ctx->pc = 0x19C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C020u;
        // 0x19c024: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C028u;
        goto label_19c028;
    }
    ctx->pc = 0x19C020u;
    {
        const bool branch_taken_0x19c020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C020u;
        // 0x19c024: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c020) {
            ctx->pc = 0x19C034u;
            goto label_19c034;
        }
    }
    ctx->pc = 0x19C028u;
label_19c028:
    // 0x19c028: 0xc067598  jal         func_19D660
label_19c02c:
    if (ctx->pc == 0x19C02Cu) {
        ctx->pc = 0x19C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C028u;
        // 0x19c02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C030u;
        goto label_19c030;
    }
    ctx->pc = 0x19C028u;
    SET_GPR_U32(ctx, 31, 0x19C030u);
    ctx->pc = 0x19C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C028u;
    // 0x19c02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19C028u, 0x19C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C030u;
label_19c030:
    // 0x19c030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c034:
    // 0x19c034: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19c034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19c038:
    // 0x19c038: 0x3e00008  jr          $ra
label_19c03c:
    if (ctx->pc == 0x19C03Cu) {
        ctx->pc = 0x19C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C038u;
        // 0x19c03c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C040u;
        goto label_fallthrough_0x19c038;
    }
    ctx->pc = 0x19C038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C038u;
        // 0x19c03c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19c038:
    ctx->pc = 0x19C040u;
}
