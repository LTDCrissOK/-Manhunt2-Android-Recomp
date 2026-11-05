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

// Function: sub_002D6220
// Address: 0x2d6220 - 0x2d6278
void sub_002D6220_0x2d6220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6220_0x2d6220");
#endif

    switch (ctx->pc) {
        case 0x2d623cu: goto label_2d623c;
        case 0x2d624cu: goto label_2d624c;
        default: break;
    }

    ctx->pc = 0x2d6220u;

    // 0x2d6220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6228: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d6228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d622c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d622cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d6230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d6234: 0xc0b5830  jal         func_2D60C0
    ctx->pc = 0x2D6234u;
    SET_GPR_U32(ctx, 31, 0x2D623Cu);
    ctx->pc = 0x2D6238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6234u;
    // 0x2d6238: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D60C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D60C0u, 0x2D6234u, 0x2D623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D623Cu;
label_2d623c:
    // 0x2d623c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D623Cu;
    {
        const bool branch_taken_0x2d623c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D623Cu;
        // 0x2d6240: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d623c) {
            ctx->pc = 0x2D6258u;
            goto label_2d6258;
        }
    }
    ctx->pc = 0x2D6244u;
    // 0x2d6244: 0xc0b5864  jal         func_2D6190
    ctx->pc = 0x2D6244u;
    SET_GPR_U32(ctx, 31, 0x2D624Cu);
    ctx->pc = 0x2D6248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6244u;
    // 0x2d6248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6190u, 0x2D6244u, 0x2D624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D624Cu;
label_2d624c:
    // 0x2d624c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d624cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d6250: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d6250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6254: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d6254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6258:
    // 0x2d6258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d625c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d625cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d6260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6264: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6264u;
        // 0x2d6268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D626Cu;
    // 0x2d626c: 0x0  nop
    ctx->pc = 0x2d626cu;
    // NOP
    // 0x2d6270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6274: 0x0  nop
    ctx->pc = 0x2d6274u;
    // NOP
    ctx->pc = 0x2d6278u;
}
