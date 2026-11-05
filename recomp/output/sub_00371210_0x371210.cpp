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

// Function: sub_00371210
// Address: 0x371210 - 0x371280
void sub_00371210_0x371210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371210_0x371210");
#endif

    switch (ctx->pc) {
        case 0x371224u: goto label_371224;
        case 0x371234u: goto label_371234;
        default: break;
    }

    ctx->pc = 0x371210u;

    // 0x371210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371218: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x371218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37121c: 0xc0dc472  jal         func_3711C8
    ctx->pc = 0x37121Cu;
    SET_GPR_U32(ctx, 31, 0x371224u);
    ctx->pc = 0x371220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37121Cu;
    // 0x371220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3711C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3711C8u, 0x37121Cu, 0x371224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371224u;
label_371224:
    // 0x371224: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x371224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x371228: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x371228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37122c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x37122cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x371230: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x371230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_371234:
    // 0x371234: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x371234u;
    {
        const bool branch_taken_0x371234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x371234) {
            ctx->pc = 0x371238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371234u;
            // 0x371238: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371250u;
            goto label_371250;
        }
    }
    ctx->pc = 0x37123Cu;
    // 0x37123c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x37123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x371240: 0x0  nop
    ctx->pc = 0x371240u;
    // NOP
    // 0x371244: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x371244u;
    {
        const bool branch_taken_0x371244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371244) {
            ctx->pc = 0x371234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371234;
        }
    }
    ctx->pc = 0x37124Cu;
    // 0x37124c: 0x0  nop
    ctx->pc = 0x37124cu;
    // NOP
label_371250:
    // 0x371250: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x371250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x371254: 0x8ca3cc40  lw          $v1, -0x33C0($a1)
    ctx->pc = 0x371254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954048)));
    // 0x371258: 0x8c82cc44  lw          $v0, -0x33BC($a0)
    ctx->pc = 0x371258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954052)));
    // 0x37125c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x37125cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x371260: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x371260u;
    {
        const bool branch_taken_0x371260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x371260) {
            ctx->pc = 0x371264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371260u;
            // 0x371264: 0xac83cc44  sw          $v1, -0x33BC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4294954052), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371268u;
            goto label_371268;
        }
    }
    ctx->pc = 0x371268u;
label_371268:
    // 0x371268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37126c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37126cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371270: 0xaca0cc40  sw          $zero, -0x33C0($a1)
    ctx->pc = 0x371270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954048), GPR_U32(ctx, 0));
    // 0x371274: 0x3e00008  jr          $ra
    ctx->pc = 0x371274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371274u;
        // 0x371278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37127Cu;
    // 0x37127c: 0x0  nop
    ctx->pc = 0x37127cu;
    // NOP
    ctx->pc = 0x371280u;
}
