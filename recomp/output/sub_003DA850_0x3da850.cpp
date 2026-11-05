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

// Function: sub_003DA850
// Address: 0x3da850 - 0x3da8c8
void sub_003DA850_0x3da850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA850_0x3da850");
#endif

    switch (ctx->pc) {
        case 0x3da874u: goto label_3da874;
        default: break;
    }

    ctx->pc = 0x3da850u;

    // 0x3da850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3da850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3da854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3da854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3da858: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3da858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3da85c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da860: 0x96060010  lhu         $a2, 0x10($s0)
    ctx->pc = 0x3da860u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da864: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x3da864u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3da868: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3da868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3da86c: 0xc0f6910  jal         func_3DA440
    ctx->pc = 0x3DA86Cu;
    SET_GPR_U32(ctx, 31, 0x3DA874u);
    ctx->pc = 0x3DA870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA86Cu;
    // 0x3da870: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA440u, 0x3DA86Cu, 0x3DA874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA874u;
label_3da874:
    // 0x3da874: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x3da874u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3da878: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3DA878u;
    {
        const bool branch_taken_0x3da878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA878u;
        // 0x3da87c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da878) {
            ctx->pc = 0x3DA8ACu;
            goto label_3da8ac;
        }
    }
    ctx->pc = 0x3DA880u;
    // 0x3da880: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3da880u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da884: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DA884u;
    {
        const bool branch_taken_0x3da884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DA888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA884u;
        // 0x3da888: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da884) {
            ctx->pc = 0x3DA8ACu;
            goto label_3da8ac;
        }
    }
    ctx->pc = 0x3DA88Cu;
    // 0x3da88c: 0x96040012  lhu         $a0, 0x12($s0)
    ctx->pc = 0x3da88cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3da890: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA890u;
    {
        const bool branch_taken_0x3da890 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3da890) {
            ctx->pc = 0x3DA894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA890u;
            // 0x3da894: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA8A0u;
            goto label_3da8a0;
        }
    }
    ctx->pc = 0x3DA898u;
    // 0x3da898: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA898u;
    {
        const bool branch_taken_0x3da898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA898u;
        // 0x3da89c: 0x2462fffe  addiu       $v0, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da898) {
            ctx->pc = 0x3DA8A8u;
            goto label_3da8a8;
        }
    }
    ctx->pc = 0x3DA8A0u;
label_3da8a0:
    // 0x3da8a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DA8A0u;
    {
        const bool branch_taken_0x3da8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA8A0u;
        // 0x3da8a4: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da8a0) {
            ctx->pc = 0x3DA8ACu;
            goto label_3da8ac;
        }
    }
    ctx->pc = 0x3DA8A8u;
label_3da8a8:
    // 0x3da8a8: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x3da8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_3da8ac:
    // 0x3da8ac: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x3da8acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da8b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3da8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3da8b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3da8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3da8b8: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x3da8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da8bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3da8bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA8C0u;
        // 0x3da8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA8C8u;
}
