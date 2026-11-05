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

// Function: sub_002CA170
// Address: 0x2ca170 - 0x2ca1c8
void sub_002CA170_0x2ca170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA170_0x2ca170");
#endif

    switch (ctx->pc) {
        case 0x2ca18cu: goto label_2ca18c;
        default: break;
    }

    ctx->pc = 0x2ca170u;

    // 0x2ca170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca178: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ca17c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ca17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca180: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca184: 0xc0b2872  jal         func_2CA1C8
    ctx->pc = 0x2CA184u;
    SET_GPR_U32(ctx, 31, 0x2CA18Cu);
    ctx->pc = 0x2CA188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA184u;
    // 0x2ca188: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA1C8u, 0x2CA184u, 0x2CA18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA18Cu;
label_2ca18c:
    // 0x2ca18c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ca18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ca190: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ca190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ca194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca198: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ca198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ca19c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2ca19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2ca1a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca1a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca1a4: 0x96220020  lhu         $v0, 0x20($s1)
    ctx->pc = 0x2ca1a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ca1a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ca1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ca1ac: 0xa6220020  sh          $v0, 0x20($s1)
    ctx->pc = 0x2ca1acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca1b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca1b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1B4u;
        // 0x2ca1b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA1BCu;
    // 0x2ca1bc: 0x0  nop
    ctx->pc = 0x2ca1bcu;
    // NOP
    // 0x2ca1c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ca1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ca1c4: 0x0  nop
    ctx->pc = 0x2ca1c4u;
    // NOP
    ctx->pc = 0x2ca1c8u;
}
