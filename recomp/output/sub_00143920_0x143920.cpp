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

// Function: sub_00143920
// Address: 0x143920 - 0x143970
void sub_00143920_0x143920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143920_0x143920");
#endif

    switch (ctx->pc) {
        case 0x14393cu: goto label_14393c;
        case 0x143944u: goto label_143944;
        case 0x143958u: goto label_143958;
        default: break;
    }

    ctx->pc = 0x143920u;

    // 0x143920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14392c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14392cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143934: 0xc050f08  jal         func_143C20
    ctx->pc = 0x143934u;
    SET_GPR_U32(ctx, 31, 0x14393Cu);
    ctx->pc = 0x143938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143934u;
    // 0x143938: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x143934u, 0x14393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14393Cu;
label_14393c:
    // 0x14393c: 0xc04e56a  jal         func_1395A8
    ctx->pc = 0x14393Cu;
    SET_GPR_U32(ctx, 31, 0x143944u);
    ctx->pc = 0x143940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14393Cu;
    // 0x143940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1395A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1395A8u, 0x14393Cu, 0x143944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143944u;
label_143944:
    // 0x143944: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x143944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x143948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14394c: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x14394cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x143950: 0xc04d89a  jal         func_136268
    ctx->pc = 0x143950u;
    SET_GPR_U32(ctx, 31, 0x143958u);
    ctx->pc = 0x143954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143950u;
    // 0x143954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x143950u, 0x143958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143958u;
label_143958:
    // 0x143958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14395c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14395cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143964: 0x3e00008  jr          $ra
    ctx->pc = 0x143964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143964u;
        // 0x143968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14396Cu;
    // 0x14396c: 0x0  nop
    ctx->pc = 0x14396cu;
    // NOP
    ctx->pc = 0x143970u;
}
