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

// Function: sub_00116E48
// Address: 0x116e48 - 0x116f10
void sub_00116E48_0x116e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116E48_0x116e48");
#endif

    switch (ctx->pc) {
        case 0x116e74u: goto label_116e74;
        case 0x116e84u: goto label_116e84;
        case 0x116ea8u: goto label_116ea8;
        case 0x116eb8u: goto label_116eb8;
        case 0x116ec8u: goto label_116ec8;
        case 0x116ee0u: goto label_116ee0;
        case 0x116ee8u: goto label_116ee8;
        case 0x116ef0u: goto label_116ef0;
        case 0x116ef8u: goto label_116ef8;
        default: break;
    }

    ctx->pc = 0x116e48u;

    // 0x116e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116e4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x116e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x116e50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116e54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x116e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x116e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x116e5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x116e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x116e60: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x116e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x116e64: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x116E64u;
    {
        const bool branch_taken_0x116e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E64u;
        // 0x116e68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e64) {
            ctx->pc = 0x116EFCu;
            goto label_116efc;
        }
    }
    ctx->pc = 0x116E6Cu;
    // 0x116e6c: 0xc045bd8  jal         func_116F60
    ctx->pc = 0x116E6Cu;
    SET_GPR_U32(ctx, 31, 0x116E74u);
    ctx->pc = 0x116F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116F60u, 0x116E6Cu, 0x116E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E74u;
label_116e74:
    // 0x116e74: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x116e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x116e78: 0x2450a080  addiu       $s0, $v0, -0x5F80
    ctx->pc = 0x116e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
    // 0x116e7c: 0xc04952c  jal         func_1254B0
    ctx->pc = 0x116E7Cu;
    SET_GPR_U32(ctx, 31, 0x116E84u);
    ctx->pc = 0x116E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E7Cu;
    // 0x116e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254B0u, 0x116E7Cu, 0x116E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E84u;
label_116e84:
    // 0x116e84: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x116E84u;
    {
        const bool branch_taken_0x116e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116e84) {
            ctx->pc = 0x116E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116E84u;
            // 0x116e88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116EFCu;
            goto label_116efc;
        }
    }
    ctx->pc = 0x116E8Cu;
    // 0x116e8c: 0x8e02043c  lw          $v0, 0x43C($s0)
    ctx->pc = 0x116e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1084)));
    // 0x116e90: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x116E90u;
    {
        const bool branch_taken_0x116e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E90u;
        // 0x116e94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e90) {
            ctx->pc = 0x116EFCu;
            goto label_116efc;
        }
    }
    ctx->pc = 0x116E98u;
    // 0x116e98: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x116e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x116e9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x116e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ea0: 0xc0f7da4  jal         func_3DF690
    ctx->pc = 0x116EA0u;
    SET_GPR_U32(ctx, 31, 0x116EA8u);
    ctx->pc = 0x116EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116EA0u;
    // 0x116ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x116EA0u, 0x116EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EA8u;
label_116ea8:
    // 0x116ea8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x116EA8u;
    {
        const bool branch_taken_0x116ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116ea8) {
            ctx->pc = 0x116EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116EA8u;
            // 0x116eac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116ED0u;
            goto label_116ed0;
        }
    }
    ctx->pc = 0x116EB0u;
    // 0x116eb0: 0xc0f7da0  jal         func_3DF680
    ctx->pc = 0x116EB0u;
    SET_GPR_U32(ctx, 31, 0x116EB8u);
    ctx->pc = 0x116EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116EB0u;
    // 0x116eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x116EB0u, 0x116EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EB8u;
label_116eb8:
    // 0x116eb8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x116EB8u;
    {
        const bool branch_taken_0x116eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116eb8) {
            ctx->pc = 0x116EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116EB8u;
            // 0x116ebc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116ED0u;
            goto label_116ed0;
        }
    }
    ctx->pc = 0x116EC0u;
    // 0x116ec0: 0xc0f7da8  jal         func_3DF6A0
    ctx->pc = 0x116EC0u;
    SET_GPR_U32(ctx, 31, 0x116EC8u);
    ctx->pc = 0x116EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116EC0u;
    // 0x116ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x116EC0u, 0x116EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EC8u;
label_116ec8:
    // 0x116ec8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x116EC8u;
    {
        const bool branch_taken_0x116ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116ec8) {
            ctx->pc = 0x116ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116EC8u;
            // 0x116ecc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116ED0u;
            goto label_116ed0;
        }
    }
    ctx->pc = 0x116ED0u;
label_116ed0:
    // 0x116ed0: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x116ED0u;
    {
        const bool branch_taken_0x116ed0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x116ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116ED0u;
        // 0x116ed4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ed0) {
            ctx->pc = 0x116EFCu;
            goto label_116efc;
        }
    }
    ctx->pc = 0x116ED8u;
    // 0x116ed8: 0xc045c48  jal         func_117120
    ctx->pc = 0x116ED8u;
    SET_GPR_U32(ctx, 31, 0x116EE0u);
    ctx->pc = 0x116EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116ED8u;
    // 0x116edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117120u, 0x116ED8u, 0x116EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EE0u;
label_116ee0:
    // 0x116ee0: 0xc045cc6  jal         func_117318
    ctx->pc = 0x116EE0u;
    SET_GPR_U32(ctx, 31, 0x116EE8u);
    ctx->pc = 0x116EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116EE0u;
    // 0x116ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117318u, 0x116EE0u, 0x116EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EE8u;
label_116ee8:
    // 0x116ee8: 0xc045d44  jal         func_117510
    ctx->pc = 0x116EE8u;
    SET_GPR_U32(ctx, 31, 0x116EF0u);
    ctx->pc = 0x116EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116EE8u;
    // 0x116eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117510u, 0x116EE8u, 0x116EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EF0u;
label_116ef0:
    // 0x116ef0: 0xc045df0  jal         func_1177C0
    ctx->pc = 0x116EF0u;
    SET_GPR_U32(ctx, 31, 0x116EF8u);
    ctx->pc = 0x116EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116EF0u;
    // 0x116ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1177C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1177C0u, 0x116EF0u, 0x116EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EF8u;
label_116ef8:
    // 0x116ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_116efc:
    // 0x116efc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116f00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x116f00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116f04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x116f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116f08: 0x3e00008  jr          $ra
    ctx->pc = 0x116F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F08u;
        // 0x116f0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116F10u;
}
