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

// Function: sub_0013E500
// Address: 0x13e500 - 0x13e550
void sub_0013E500_0x13e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E500_0x13e500");
#endif

    switch (ctx->pc) {
        case 0x13e500u: goto label_13e500;
        case 0x13e504u: goto label_13e504;
        case 0x13e508u: goto label_13e508;
        case 0x13e50cu: goto label_13e50c;
        case 0x13e510u: goto label_13e510;
        case 0x13e514u: goto label_13e514;
        case 0x13e518u: goto label_13e518;
        case 0x13e51cu: goto label_13e51c;
        case 0x13e520u: goto label_13e520;
        case 0x13e524u: goto label_13e524;
        case 0x13e528u: goto label_13e528;
        case 0x13e52cu: goto label_13e52c;
        case 0x13e530u: goto label_13e530;
        case 0x13e534u: goto label_13e534;
        case 0x13e538u: goto label_13e538;
        case 0x13e53cu: goto label_13e53c;
        case 0x13e540u: goto label_13e540;
        case 0x13e544u: goto label_13e544;
        case 0x13e548u: goto label_13e548;
        case 0x13e54cu: goto label_13e54c;
        default: break;
    }

    ctx->pc = 0x13e500u;

label_13e500:
    // 0x13e500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e504:
    // 0x13e504: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13e508:
    // 0x13e508: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e50c:
    // 0x13e50c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13e510:
    // 0x13e510: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13e510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13e514:
    // 0x13e514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13e518:
    // 0x13e518: 0xc041de4  jal         func_107790
label_13e51c:
    if (ctx->pc == 0x13E51Cu) {
        ctx->pc = 0x13E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E518u;
        // 0x13e51c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E520u;
        goto label_13e520;
    }
    ctx->pc = 0x13E518u;
    SET_GPR_U32(ctx, 31, 0x13E520u);
    ctx->pc = 0x13E51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E518u;
    // 0x13e51c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107790u, 0x13E518u, 0x13E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E520u;
label_13e520:
    // 0x13e520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e524:
    // 0x13e524: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x13e524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_13e528:
    // 0x13e528: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13e52c:
    // 0x13e52c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_13e530:
    // 0x13e530: 0x40f809  jalr        $v0
label_13e534:
    if (ctx->pc == 0x13E534u) {
        ctx->pc = 0x13E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E530u;
        // 0x13e534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E538u;
        goto label_13e538;
    }
    ctx->pc = 0x13E530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E538u);
        ctx->pc = 0x13E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E530u;
        // 0x13e534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E530u, 0x13E538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E538u;
label_13e538:
    // 0x13e538: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e53c:
    // 0x13e53c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e53cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e540:
    // 0x13e540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e544:
    // 0x13e544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e548:
    // 0x13e548: 0x3e00008  jr          $ra
label_13e54c:
    if (ctx->pc == 0x13E54Cu) {
        ctx->pc = 0x13E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E548u;
        // 0x13e54c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E550u;
        goto label_fallthrough_0x13e548;
    }
    ctx->pc = 0x13E548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E548u;
        // 0x13e54c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13e548:
    ctx->pc = 0x13E550u;
}
