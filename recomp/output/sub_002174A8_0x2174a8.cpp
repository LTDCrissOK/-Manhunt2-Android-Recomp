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

// Function: sub_002174A8
// Address: 0x2174a8 - 0x217538
void sub_002174A8_0x2174a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002174A8_0x2174a8");
#endif

    switch (ctx->pc) {
        case 0x2174d8u: goto label_2174d8;
        case 0x2174e0u: goto label_2174e0;
        default: break;
    }

    ctx->pc = 0x2174a8u;

    // 0x2174a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2174a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2174ac: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2174acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2174b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2174b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2174b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2174b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2174b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2174b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2174bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2174c0: 0x244434c0  addiu       $a0, $v0, 0x34C0
    ctx->pc = 0x2174c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13504));
    // 0x2174c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2174c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2174c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2174c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A34C4u));
    // 0x2174cc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2174ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A34CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34CCu, _value); } while (0);
    // 0x2174d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2174D0u;
    {
        const bool branch_taken_0x2174d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2174D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174D0u;
        // 0x2174d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2174d0) {
            ctx->pc = 0x2174F0u;
            goto label_2174f0;
        }
    }
    ctx->pc = 0x2174D8u;
label_2174d8:
    // 0x2174d8: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x2174D8u;
    SET_GPR_U32(ctx, 31, 0x2174E0u);
    ctx->pc = 0x2174DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174D8u;
    // 0x2174dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x2174D8u, 0x2174E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174E0u;
label_2174e0:
    // 0x2174e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2174E0u;
    {
        const bool branch_taken_0x2174e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2174E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174E0u;
        // 0x2174e4: 0x262334c0  addiu       $v1, $s1, 0x34C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 13504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2174e0) {
            ctx->pc = 0x2174F4u;
            goto label_2174f4;
        }
    }
    ctx->pc = 0x2174E8u;
    // 0x2174e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2174E8u;
    {
        const bool branch_taken_0x2174e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2174ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174E8u;
        // 0x2174ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2174e8) {
            ctx->pc = 0x217520u;
            goto label_217520;
        }
    }
    ctx->pc = 0x2174F0u;
label_2174f0:
    // 0x2174f0: 0x262334c0  addiu       $v1, $s1, 0x34C0
    ctx->pc = 0x2174f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 13504));
label_2174f4:
    // 0x2174f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2174f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2174f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2174F8u;
    {
        const bool branch_taken_0x2174f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2174FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174F8u;
        // 0x2174fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2174f8) {
            ctx->pc = 0x217504u;
            goto label_217504;
        }
    }
    ctx->pc = 0x217500u;
    // 0x217500: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x217500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_217504:
    // 0x217504: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217504u;
    {
        const bool branch_taken_0x217504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217504) {
            ctx->pc = 0x217514u;
            goto label_217514;
        }
    }
    ctx->pc = 0x21750Cu;
    // 0x21750c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x217510: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x217510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_217514:
    // 0x217514: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x217514u;
    {
        const bool branch_taken_0x217514 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x217514) {
            ctx->pc = 0x217518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217514u;
            // 0x217518: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2174D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2174d8;
        }
    }
    ctx->pc = 0x21751Cu;
    // 0x21751c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21751cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217520:
    // 0x217520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217524: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217528: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21752c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21752cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217530: 0x3e00008  jr          $ra
    ctx->pc = 0x217530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217530u;
        // 0x217534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217538u;
}
