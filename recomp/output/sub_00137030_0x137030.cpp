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

// Function: sub_00137030
// Address: 0x137030 - 0x137130
void sub_00137030_0x137030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137030_0x137030");
#endif

    switch (ctx->pc) {
        case 0x137064u: goto label_137064;
        case 0x137074u: goto label_137074;
        case 0x137080u: goto label_137080;
        case 0x13708cu: goto label_13708c;
        case 0x137098u: goto label_137098;
        case 0x1370a0u: goto label_1370a0;
        case 0x1370b4u: goto label_1370b4;
        case 0x1370c0u: goto label_1370c0;
        case 0x1370ccu: goto label_1370cc;
        case 0x1370d8u: goto label_1370d8;
        case 0x1370e8u: goto label_1370e8;
        case 0x137108u: goto label_137108;
        default: break;
    }

    ctx->pc = 0x137030u;

    // 0x137030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137034: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x137034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x137038: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x137038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13703c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13703cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x137040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137044: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x137044u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137048: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x137048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13704c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13704cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137050: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x137050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137054: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x137054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x137058: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x137058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13705c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x13705Cu;
    SET_GPR_U32(ctx, 31, 0x137064u);
    ctx->pc = 0x137060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13705Cu;
    // 0x137060: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x13705Cu, 0x137064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137064u;
label_137064:
    // 0x137064: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x137064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137068: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13706c: 0xc046138  jal         func_1184E0
    ctx->pc = 0x13706Cu;
    SET_GPR_U32(ctx, 31, 0x137074u);
    ctx->pc = 0x137070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13706Cu;
    // 0x137070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x13706Cu, 0x137074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137074u;
label_137074:
    // 0x137074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137078: 0xc046154  jal         func_118550
    ctx->pc = 0x137078u;
    SET_GPR_U32(ctx, 31, 0x137080u);
    ctx->pc = 0x13707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137078u;
    // 0x13707c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x137078u, 0x137080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137080u;
label_137080:
    // 0x137080: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x137080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137084: 0xc046164  jal         func_118590
    ctx->pc = 0x137084u;
    SET_GPR_U32(ctx, 31, 0x13708Cu);
    ctx->pc = 0x137088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137084u;
    // 0x137088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x137084u, 0x13708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13708Cu;
label_13708c:
    // 0x13708c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13708cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137090: 0xc046256  jal         func_118958
    ctx->pc = 0x137090u;
    SET_GPR_U32(ctx, 31, 0x137098u);
    ctx->pc = 0x137094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137090u;
    // 0x137094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x137090u, 0x137098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137098u;
label_137098:
    // 0x137098: 0xc04dabc  jal         func_136AF0
    ctx->pc = 0x137098u;
    SET_GPR_U32(ctx, 31, 0x1370A0u);
    ctx->pc = 0x13709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137098u;
    // 0x13709c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AF0u, 0x137098u, 0x1370A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370A0u;
label_1370a0:
    // 0x1370a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1370a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370a4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1370a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1370a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1370a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370ac: 0xc045612  jal         func_115848
    ctx->pc = 0x1370ACu;
    SET_GPR_U32(ctx, 31, 0x1370B4u);
    ctx->pc = 0x1370B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370ACu;
    // 0x1370b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x1370ACu, 0x1370B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370B4u;
label_1370b4:
    // 0x1370b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1370b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370b8: 0xc045668  jal         func_1159A0
    ctx->pc = 0x1370B8u;
    SET_GPR_U32(ctx, 31, 0x1370C0u);
    ctx->pc = 0x1370BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370B8u;
    // 0x1370bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x1370B8u, 0x1370C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370C0u;
label_1370c0:
    // 0x1370c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1370c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370c4: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x1370C4u;
    SET_GPR_U32(ctx, 31, 0x1370CCu);
    ctx->pc = 0x1370C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370C4u;
    // 0x1370c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x1370C4u, 0x1370CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370CCu;
label_1370cc:
    // 0x1370cc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1370ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1370d0: 0xc04b2a2  jal         func_12CA88
    ctx->pc = 0x1370D0u;
    SET_GPR_U32(ctx, 31, 0x1370D8u);
    ctx->pc = 0x1370D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370D0u;
    // 0x1370d4: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA88u, 0x1370D0u, 0x1370D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370D8u;
label_1370d8:
    // 0x1370d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1370d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1370dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370e0: 0xc0456a0  jal         func_115A80
    ctx->pc = 0x1370E0u;
    SET_GPR_U32(ctx, 31, 0x1370E8u);
    ctx->pc = 0x1370E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370E0u;
    // 0x1370e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A80u, 0x1370E0u, 0x1370E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370E8u;
label_1370e8:
    // 0x1370e8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1370e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1370ec: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1370ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1370f0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1370f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1370f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1370f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370f8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1370f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1370fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1370fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137100: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x137100u;
    SET_GPR_U32(ctx, 31, 0x137108u);
    ctx->pc = 0x137104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137100u;
    // 0x137104: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x137100u, 0x137108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137108u;
label_137108:
    // 0x137108: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x137108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13710c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13710cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x137110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x137114: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x137114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137118: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x137118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13711c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13711cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137120: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x137120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x137124: 0x3e00008  jr          $ra
    ctx->pc = 0x137124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137124u;
        // 0x137128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13712Cu;
    // 0x13712c: 0x0  nop
    ctx->pc = 0x13712cu;
    // NOP
    ctx->pc = 0x137130u;
}
