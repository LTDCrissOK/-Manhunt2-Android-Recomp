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

// Function: sub_0039B5A8
// Address: 0x39b5a8 - 0x39b678
void sub_0039B5A8_0x39b5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B5A8_0x39b5a8");
#endif

    switch (ctx->pc) {
        case 0x39b5f0u: goto label_39b5f0;
        case 0x39b600u: goto label_39b600;
        case 0x39b610u: goto label_39b610;
        case 0x39b61cu: goto label_39b61c;
        case 0x39b624u: goto label_39b624;
        case 0x39b62cu: goto label_39b62c;
        case 0x39b644u: goto label_39b644;
        case 0x39b64cu: goto label_39b64c;
        default: break;
    }

    ctx->pc = 0x39b5a8u;

    // 0x39b5a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39b5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39b5ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39b5b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39b5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b5b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39b5b8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x39b5b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b5bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39b5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39b5c0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x39b5c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b5c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39b5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39b5c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39b5c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b5cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x39b5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x39b5d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x39b5d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b5d4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x39b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x39b5d8: 0x8605003e  lh          $a1, 0x3E($s0)
    ctx->pc = 0x39b5d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x39b5dc: 0x8606003c  lh          $a2, 0x3C($s0)
    ctx->pc = 0x39b5dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x39b5e0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39b5e4: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x39b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x39b5e8: 0xc0e69c2  jal         func_39A708
    ctx->pc = 0x39B5E8u;
    SET_GPR_U32(ctx, 31, 0x39B5F0u);
    ctx->pc = 0x39B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B5E8u;
    // 0x39b5ec: 0x632c0  sll         $a2, $a2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A708u, 0x39B5E8u, 0x39B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B5F0u;
label_39b5f0:
    // 0x39b5f0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x39b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x39b5f4: 0x8c65ad74  lw          $a1, -0x528C($v1)
    ctx->pc = 0x39b5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x40AD74u));
    // 0x39b5f8: 0xc0e6798  jal         func_399E60
    ctx->pc = 0x39B5F8u;
    SET_GPR_U32(ctx, 31, 0x39B600u);
    ctx->pc = 0x39B5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B5F8u;
    // 0x39b5fc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E60u, 0x39B5F8u, 0x39B600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B600u;
label_39b600:
    // 0x39b600: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39b600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39b604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b608: 0xc0e6780  jal         func_399E00
    ctx->pc = 0x39B608u;
    SET_GPR_U32(ctx, 31, 0x39B610u);
    ctx->pc = 0x39B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B608u;
    // 0x39b60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E00u, 0x39B608u, 0x39B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B610u;
label_39b610:
    // 0x39b610: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39b610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39b614: 0xc0e66bc  jal         func_399AF0
    ctx->pc = 0x39B614u;
    SET_GPR_U32(ctx, 31, 0x39B61Cu);
    ctx->pc = 0x39B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B614u;
    // 0x39b618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AF0u, 0x39B614u, 0x39B61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B61Cu;
label_39b61c:
    // 0x39b61c: 0xc0e673a  jal         func_399CE8
    ctx->pc = 0x39B61Cu;
    SET_GPR_U32(ctx, 31, 0x39B624u);
    ctx->pc = 0x39B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B61Cu;
    // 0x39b620: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399CE8u, 0x39B61Cu, 0x39B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B624u;
label_39b624:
    // 0x39b624: 0xc0e6660  jal         func_399980
    ctx->pc = 0x39B624u;
    SET_GPR_U32(ctx, 31, 0x39B62Cu);
    ctx->pc = 0x39B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B624u;
    // 0x39b628: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399980u, 0x39B624u, 0x39B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B62Cu;
label_39b62c:
    // 0x39b62c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39b62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39b630: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x39b630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b634: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x39b634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b638: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x39b638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b63c: 0xc0e65f8  jal         func_3997E0
    ctx->pc = 0x39B63Cu;
    SET_GPR_U32(ctx, 31, 0x39B644u);
    ctx->pc = 0x39B640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B63Cu;
    // 0x39b640: 0x1142f8  dsll        $t0, $s1, 11 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << 11);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3997E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3997E0u, 0x39B63Cu, 0x39B644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B644u;
label_39b644:
    // 0x39b644: 0xc0e66f8  jal         func_399BE0
    ctx->pc = 0x39B644u;
    SET_GPR_U32(ctx, 31, 0x39B64Cu);
    ctx->pc = 0x39B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B644u;
    // 0x39b648: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BE0u, 0x39B644u, 0x39B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B64Cu;
label_39b64c:
    // 0x39b64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b650: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x39b650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39b654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39b65c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39b65cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b660: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39b660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39b664: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39b664u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39b668: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x39b668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39b66c: 0x80e6d28  j           func_39B4A0
    ctx->pc = 0x39B66Cu;
    ctx->pc = 0x39B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B66Cu;
    // 0x39b670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B4A0u;
    sub_0039B4A0_0x39b4a0(rdram, ctx, runtime); return;
    ctx->pc = 0x39B674u;
    // 0x39b674: 0x0  nop
    ctx->pc = 0x39b674u;
    // NOP
    ctx->pc = 0x39b678u;
}
