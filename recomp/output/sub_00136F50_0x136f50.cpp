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

// Function: sub_00136F50
// Address: 0x136f50 - 0x137030
void sub_00136F50_0x136f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136F50_0x136f50");
#endif

    switch (ctx->pc) {
        case 0x136f84u: goto label_136f84;
        case 0x136f94u: goto label_136f94;
        case 0x136fa0u: goto label_136fa0;
        case 0x136facu: goto label_136fac;
        case 0x136fb8u: goto label_136fb8;
        case 0x136fc0u: goto label_136fc0;
        case 0x136fd4u: goto label_136fd4;
        case 0x136fe0u: goto label_136fe0;
        case 0x136fecu: goto label_136fec;
        case 0x13700cu: goto label_13700c;
        default: break;
    }

    ctx->pc = 0x136f50u;

    // 0x136f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136f54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x136f58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x136f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x136f5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x136f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136f64: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x136f64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x136f6c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x136f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f70: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x136f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136f78: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x136f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x136f7c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x136F7Cu;
    SET_GPR_U32(ctx, 31, 0x136F84u);
    ctx->pc = 0x136F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136F7Cu;
    // 0x136f80: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x136F7Cu, 0x136F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F84u;
label_136f84:
    // 0x136f84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x136f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f8c: 0xc046138  jal         func_1184E0
    ctx->pc = 0x136F8Cu;
    SET_GPR_U32(ctx, 31, 0x136F94u);
    ctx->pc = 0x136F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136F8Cu;
    // 0x136f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x136F8Cu, 0x136F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F94u;
label_136f94:
    // 0x136f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f98: 0xc046154  jal         func_118550
    ctx->pc = 0x136F98u;
    SET_GPR_U32(ctx, 31, 0x136FA0u);
    ctx->pc = 0x136F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136F98u;
    // 0x136f9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x136F98u, 0x136FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FA0u;
label_136fa0:
    // 0x136fa0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x136fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fa4: 0xc046164  jal         func_118590
    ctx->pc = 0x136FA4u;
    SET_GPR_U32(ctx, 31, 0x136FACu);
    ctx->pc = 0x136FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FA4u;
    // 0x136fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x136FA4u, 0x136FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FACu;
label_136fac:
    // 0x136fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fb0: 0xc046256  jal         func_118958
    ctx->pc = 0x136FB0u;
    SET_GPR_U32(ctx, 31, 0x136FB8u);
    ctx->pc = 0x136FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FB0u;
    // 0x136fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x136FB0u, 0x136FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FB8u;
label_136fb8:
    // 0x136fb8: 0xc04dabc  jal         func_136AF0
    ctx->pc = 0x136FB8u;
    SET_GPR_U32(ctx, 31, 0x136FC0u);
    ctx->pc = 0x136FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FB8u;
    // 0x136fbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AF0u, 0x136FB8u, 0x136FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FC0u;
label_136fc0:
    // 0x136fc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x136fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fc4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x136fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x136fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fcc: 0xc045612  jal         func_115848
    ctx->pc = 0x136FCCu;
    SET_GPR_U32(ctx, 31, 0x136FD4u);
    ctx->pc = 0x136FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FCCu;
    // 0x136fd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x136FCCu, 0x136FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FD4u;
label_136fd4:
    // 0x136fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fd8: 0xc045668  jal         func_1159A0
    ctx->pc = 0x136FD8u;
    SET_GPR_U32(ctx, 31, 0x136FE0u);
    ctx->pc = 0x136FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FD8u;
    // 0x136fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x136FD8u, 0x136FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FE0u;
label_136fe0:
    // 0x136fe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x136fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fe4: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x136FE4u;
    SET_GPR_U32(ctx, 31, 0x136FECu);
    ctx->pc = 0x136FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FE4u;
    // 0x136fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x136FE4u, 0x136FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FECu;
label_136fec:
    // 0x136fec: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x136fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x136ff0: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x136ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x136ff4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x136ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x136ff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ffc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x136ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x137000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137004: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x137004u;
    SET_GPR_U32(ctx, 31, 0x13700Cu);
    ctx->pc = 0x137008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137004u;
    // 0x137008: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x137004u, 0x13700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13700Cu;
label_13700c:
    // 0x13700c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13700cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x137010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x137014: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x137014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137018: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x137018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13701c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13701cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137020: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x137020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x137024: 0x3e00008  jr          $ra
    ctx->pc = 0x137024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137024u;
        // 0x137028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13702Cu;
    // 0x13702c: 0x0  nop
    ctx->pc = 0x13702cu;
    // NOP
    ctx->pc = 0x137030u;
}
