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

// Function: sub_0013EDE8
// Address: 0x13ede8 - 0x13eec8
void sub_0013EDE8_0x13ede8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EDE8_0x13ede8");
#endif

    switch (ctx->pc) {
        case 0x13ee1cu: goto label_13ee1c;
        case 0x13ee2cu: goto label_13ee2c;
        case 0x13ee38u: goto label_13ee38;
        case 0x13ee44u: goto label_13ee44;
        case 0x13ee50u: goto label_13ee50;
        case 0x13ee58u: goto label_13ee58;
        case 0x13ee6cu: goto label_13ee6c;
        case 0x13ee78u: goto label_13ee78;
        case 0x13ee84u: goto label_13ee84;
        case 0x13eea4u: goto label_13eea4;
        default: break;
    }

    ctx->pc = 0x13ede8u;

    // 0x13ede8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ede8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13edec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13edecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13edf0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13edf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13edf4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13edf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13edf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13edf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13edfc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13edfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13ee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13ee04: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13ee04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee08: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x13ee08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13ee10: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13ee10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13ee14: 0xc04f8fc  jal         func_13E3F0
    ctx->pc = 0x13EE14u;
    SET_GPR_U32(ctx, 31, 0x13EE1Cu);
    ctx->pc = 0x13EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE14u;
    // 0x13ee18: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x13EE14u, 0x13EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE1Cu;
label_13ee1c:
    // 0x13ee1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13ee1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ee20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee24: 0xc046138  jal         func_1184E0
    ctx->pc = 0x13EE24u;
    SET_GPR_U32(ctx, 31, 0x13EE2Cu);
    ctx->pc = 0x13EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE24u;
    // 0x13ee28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x13EE24u, 0x13EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE2Cu;
label_13ee2c:
    // 0x13ee2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ee2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee30: 0xc046154  jal         func_118550
    ctx->pc = 0x13EE30u;
    SET_GPR_U32(ctx, 31, 0x13EE38u);
    ctx->pc = 0x13EE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE30u;
    // 0x13ee34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x13EE30u, 0x13EE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE38u;
label_13ee38:
    // 0x13ee38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13ee38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee3c: 0xc046164  jal         func_118590
    ctx->pc = 0x13EE3Cu;
    SET_GPR_U32(ctx, 31, 0x13EE44u);
    ctx->pc = 0x13EE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE3Cu;
    // 0x13ee40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x13EE3Cu, 0x13EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE44u;
label_13ee44:
    // 0x13ee44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ee44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee48: 0xc046256  jal         func_118958
    ctx->pc = 0x13EE48u;
    SET_GPR_U32(ctx, 31, 0x13EE50u);
    ctx->pc = 0x13EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE48u;
    // 0x13ee4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x13EE48u, 0x13EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE50u;
label_13ee50:
    // 0x13ee50: 0xc04f91e  jal         func_13E478
    ctx->pc = 0x13EE50u;
    SET_GPR_U32(ctx, 31, 0x13EE58u);
    ctx->pc = 0x13EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE50u;
    // 0x13ee54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E478u, 0x13EE50u, 0x13EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE58u;
label_13ee58:
    // 0x13ee58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ee58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee5c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x13ee5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13ee60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ee60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee64: 0xc045612  jal         func_115848
    ctx->pc = 0x13EE64u;
    SET_GPR_U32(ctx, 31, 0x13EE6Cu);
    ctx->pc = 0x13EE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE64u;
    // 0x13ee68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x13EE64u, 0x13EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE6Cu;
label_13ee6c:
    // 0x13ee6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ee6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee70: 0xc045668  jal         func_1159A0
    ctx->pc = 0x13EE70u;
    SET_GPR_U32(ctx, 31, 0x13EE78u);
    ctx->pc = 0x13EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE70u;
    // 0x13ee74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x13EE70u, 0x13EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE78u;
label_13ee78:
    // 0x13ee78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ee78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee7c: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x13EE7Cu;
    SET_GPR_U32(ctx, 31, 0x13EE84u);
    ctx->pc = 0x13EE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE7Cu;
    // 0x13ee80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x13EE7Cu, 0x13EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE84u;
label_13ee84:
    // 0x13ee84: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13ee88: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x13ee88u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13ee8c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13ee90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ee90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee94: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13ee98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ee98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee9c: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x13EE9Cu;
    SET_GPR_U32(ctx, 31, 0x13EEA4u);
    ctx->pc = 0x13EEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE9Cu;
    // 0x13eea0: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x13EE9Cu, 0x13EEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EEA4u;
label_13eea4:
    // 0x13eea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13eea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eea8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13eea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13eeac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13eeacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13eeb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13eeb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13eeb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13eeb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13eeb8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13eeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13eebc: 0x3e00008  jr          $ra
    ctx->pc = 0x13EEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEBCu;
        // 0x13eec0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EEC4u;
    // 0x13eec4: 0x0  nop
    ctx->pc = 0x13eec4u;
    // NOP
    ctx->pc = 0x13eec8u;
}
