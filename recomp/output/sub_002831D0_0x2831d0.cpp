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

// Function: sub_002831D0
// Address: 0x2831d0 - 0x283258
void sub_002831D0_0x2831d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002831D0_0x2831d0");
#endif

    switch (ctx->pc) {
        case 0x2831f0u: goto label_2831f0;
        case 0x283210u: goto label_283210;
        default: break;
    }

    ctx->pc = 0x2831d0u;

    // 0x2831d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2831d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2831d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2831d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2831d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2831d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2831dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2831dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2831e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2831e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2831e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2831e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2831e8: 0xc0a0c40  jal         func_283100
    ctx->pc = 0x2831E8u;
    SET_GPR_U32(ctx, 31, 0x2831F0u);
    ctx->pc = 0x2831ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2831E8u;
    // 0x2831ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283100u, 0x2831E8u, 0x2831F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2831F0u;
label_2831f0:
    // 0x2831f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2831f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2831f4: 0x18c00012  blez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2831F4u;
    {
        const bool branch_taken_0x2831f4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2831F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831F4u;
        // 0x2831f8: 0x2261021  addu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831f4) {
            ctx->pc = 0x283240u;
            goto label_283240;
        }
    }
    ctx->pc = 0x2831FCu;
    // 0x2831fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2831fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283200: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x283200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283204: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x283204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283208: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x283208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28320c: 0x0  nop
    ctx->pc = 0x28320cu;
    // NOP
label_283210:
    // 0x283210: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x283210u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x283214: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x283214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x283218: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x283218u;
    {
        const bool branch_taken_0x283218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283218) {
            ctx->pc = 0x28321Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283218u;
            // 0x28321c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283228u;
            goto label_283228;
        }
    }
    ctx->pc = 0x283220u;
    // 0x283220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283220u;
    {
        const bool branch_taken_0x283220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283220u;
        // 0x283224: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283220) {
            ctx->pc = 0x28322Cu;
            goto label_28322c;
        }
    }
    ctx->pc = 0x283228u;
label_283228:
    // 0x283228: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x283228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_28322c:
    // 0x28322c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28322cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x283230: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x283230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x283234: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x283234u;
    {
        const bool branch_taken_0x283234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x283238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283234u;
        // 0x283238: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283234) {
            ctx->pc = 0x283210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283210;
        }
    }
    ctx->pc = 0x28323Cu;
    // 0x28323c: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x28323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_283240:
    // 0x283240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283244: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x283244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x283248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28324c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x28324cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x283250: 0x3e00008  jr          $ra
    ctx->pc = 0x283250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283250u;
        // 0x283254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283258u;
}
