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

// Function: sub_00109EB8
// Address: 0x109eb8 - 0x109f40
void sub_00109EB8_0x109eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109EB8_0x109eb8");
#endif

    switch (ctx->pc) {
        case 0x109ee8u: goto label_109ee8;
        case 0x109f00u: goto label_109f00;
        case 0x109f10u: goto label_109f10;
        case 0x109f20u: goto label_109f20;
        default: break;
    }

    ctx->pc = 0x109eb8u;

    // 0x109eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x109ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109ec0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x109ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ec8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x109ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x109ecc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x109eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ed0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x109ed0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ed4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x109ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ed8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x109ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x109edc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x109edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x109ee0: 0xc04344a  jal         func_10D128
    ctx->pc = 0x109EE0u;
    SET_GPR_U32(ctx, 31, 0x109EE8u);
    ctx->pc = 0x109EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EE0u;
    // 0x109ee4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D128u, 0x109EE0u, 0x109EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EE8u;
label_109ee8:
    // 0x109ee8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x109ee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ef4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x109ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ef8: 0xc0435f4  jal         func_10D7D0
    ctx->pc = 0x109EF8u;
    SET_GPR_U32(ctx, 31, 0x109F00u);
    ctx->pc = 0x109EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EF8u;
    // 0x109efc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D7D0u, 0x109EF8u, 0x109F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F00u;
label_109f00:
    // 0x109f00: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x109F00u;
    {
        const bool branch_taken_0x109f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F00u;
        // 0x109f04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f00) {
            ctx->pc = 0x109F24u;
            goto label_109f24;
        }
    }
    ctx->pc = 0x109F08u;
    // 0x109f08: 0xc05a5ee  jal         func_1697B8
    ctx->pc = 0x109F08u;
    SET_GPR_U32(ctx, 31, 0x109F10u);
    ctx->pc = 0x109F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F08u;
    // 0x109f0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697B8u, 0x109F08u, 0x109F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F10u;
label_109f10:
    // 0x109f10: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x109f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x109f14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x109f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f18: 0xc042058  jal         func_108160
    ctx->pc = 0x109F18u;
    SET_GPR_U32(ctx, 31, 0x109F20u);
    ctx->pc = 0x109F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F18u;
    // 0x109f1c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108160u, 0x109F18u, 0x109F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F20u;
label_109f20:
    // 0x109f20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x109f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_109f24:
    // 0x109f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109f28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x109f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109f2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x109f2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109f30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x109f30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x109f34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x109f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109f38: 0x3e00008  jr          $ra
    ctx->pc = 0x109F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F38u;
        // 0x109f3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109F40u;
}
