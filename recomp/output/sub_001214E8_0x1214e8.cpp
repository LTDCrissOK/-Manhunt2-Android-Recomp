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

// Function: sub_001214E8
// Address: 0x1214e8 - 0x121558
void sub_001214E8_0x1214e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001214E8_0x1214e8");
#endif

    switch (ctx->pc) {
        case 0x121510u: goto label_121510;
        case 0x121520u: goto label_121520;
        case 0x121534u: goto label_121534;
        default: break;
    }

    ctx->pc = 0x1214e8u;

    // 0x1214e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1214e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1214ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1214ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1214f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1214f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1214f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1214f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1214f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1214f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1214fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1214fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121500: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x121500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x121504: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x121504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121508: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121508u;
    SET_GPR_U32(ctx, 31, 0x121510u);
    ctx->pc = 0x12150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121508u;
    // 0x12150c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121508u, 0x121510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121510u;
label_121510:
    // 0x121510: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121510u;
    {
        const bool branch_taken_0x121510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121510u;
        // 0x121514: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121510) {
            ctx->pc = 0x121540u;
            goto label_121540;
        }
    }
    ctx->pc = 0x121518u;
    // 0x121518: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121518u;
    SET_GPR_U32(ctx, 31, 0x121520u);
    ctx->pc = 0x12151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121518u;
    // 0x12151c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121518u, 0x121520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121520u;
label_121520:
    // 0x121520: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121520u;
    {
        const bool branch_taken_0x121520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121520u;
        // 0x121524: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121520) {
            ctx->pc = 0x12153Cu;
            goto label_12153c;
        }
    }
    ctx->pc = 0x121528u;
    // 0x121528: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x121528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x12152c: 0xc0425bc  jal         func_1096F0
    ctx->pc = 0x12152Cu;
    SET_GPR_U32(ctx, 31, 0x121534u);
    ctx->pc = 0x121530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12152Cu;
    // 0x121530: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1096F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1096F0u, 0x12152Cu, 0x121534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121534u;
label_121534:
    // 0x121534: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121534u;
    {
        const bool branch_taken_0x121534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121534u;
        // 0x121538: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121534) {
            ctx->pc = 0x121544u;
            goto label_121544;
        }
    }
    ctx->pc = 0x12153Cu;
label_12153c:
    // 0x12153c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121540:
    // 0x121540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121544:
    // 0x121544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121548: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12154c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121550: 0x3e00008  jr          $ra
    ctx->pc = 0x121550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121550u;
        // 0x121554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121558u;
}
