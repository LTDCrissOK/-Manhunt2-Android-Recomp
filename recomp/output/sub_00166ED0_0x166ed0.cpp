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

// Function: sub_00166ED0
// Address: 0x166ed0 - 0x166f48
void sub_00166ED0_0x166ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166ED0_0x166ed0");
#endif

    switch (ctx->pc) {
        case 0x166eecu: goto label_166eec;
        case 0x166ef8u: goto label_166ef8;
        case 0x166f08u: goto label_166f08;
        case 0x166f2cu: goto label_166f2c;
        default: break;
    }

    ctx->pc = 0x166ed0u;

    // 0x166ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166ed8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x166ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x166edc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ee0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166ee4: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x166EE4u;
    SET_GPR_U32(ctx, 31, 0x166EECu);
    ctx->pc = 0x166EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166EE4u;
    // 0x166ee8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x166EE4u, 0x166EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166EECu;
label_166eec:
    // 0x166eec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ef0: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x166EF0u;
    SET_GPR_U32(ctx, 31, 0x166EF8u);
    ctx->pc = 0x166EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166EF0u;
    // 0x166ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x166EF0u, 0x166EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166EF8u;
label_166ef8:
    // 0x166ef8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x166EF8u;
    {
        const bool branch_taken_0x166ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EF8u;
        // 0x166efc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ef8) {
            ctx->pc = 0x166F30u;
            goto label_166f30;
        }
    }
    ctx->pc = 0x166F00u;
    // 0x166f00: 0xc04d7d4  jal         func_135F50
    ctx->pc = 0x166F00u;
    SET_GPR_U32(ctx, 31, 0x166F08u);
    ctx->pc = 0x166F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F00u;
    // 0x166f04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F50u, 0x166F00u, 0x166F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F08u;
label_166f08:
    // 0x166f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166f0c: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x166f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
    // 0x166f10: 0xae02039c  sw          $v0, 0x39C($s0)
    ctx->pc = 0x166f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 2));
    // 0x166f14: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x166f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x166f18: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x166f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x166f1c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x166f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x166f20: 0x8e0602e0  lw          $a2, 0x2E0($s0)
    ctx->pc = 0x166f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x166f24: 0xc04aec2  jal         func_12BB08
    ctx->pc = 0x166F24u;
    SET_GPR_U32(ctx, 31, 0x166F2Cu);
    ctx->pc = 0x166F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F24u;
    // 0x166f28: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BB08u, 0x166F24u, 0x166F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F2Cu;
label_166f2c:
    // 0x166f2c: 0xae1103a0  sw          $s1, 0x3A0($s0)
    ctx->pc = 0x166f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 17));
label_166f30:
    // 0x166f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x166f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166f34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x166f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166f38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x166F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F3Cu;
        // 0x166f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166F44u;
    // 0x166f44: 0x0  nop
    ctx->pc = 0x166f44u;
    // NOP
    ctx->pc = 0x166f48u;
}
