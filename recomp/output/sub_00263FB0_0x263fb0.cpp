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

// Function: sub_00263FB0
// Address: 0x263fb0 - 0x264030
void sub_00263FB0_0x263fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263FB0_0x263fb0");
#endif

    switch (ctx->pc) {
        case 0x263fe0u: goto label_263fe0;
        case 0x263ff4u: goto label_263ff4;
        default: break;
    }

    ctx->pc = 0x263fb0u;

    // 0x263fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x263fb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x263fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x263fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x263fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x263fbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x263fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x263fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x263fc4: 0x8e2502dc  lw          $a1, 0x2DC($s1)
    ctx->pc = 0x263fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x263fc8: 0x4a00013  bltz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x263FC8u;
    {
        const bool branch_taken_0x263fc8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x263FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FC8u;
        // 0x263fcc: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263fc8) {
            ctx->pc = 0x264018u;
            goto label_264018;
        }
    }
    ctx->pc = 0x263FD0u;
    // 0x263fd0: 0x24a502cc  addiu       $a1, $a1, 0x2CC
    ctx->pc = 0x263fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 716));
    // 0x263fd4: 0x263002cc  addiu       $s0, $s1, 0x2CC
    ctx->pc = 0x263fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 716));
    // 0x263fd8: 0xc098346  jal         func_260D18
    ctx->pc = 0x263FD8u;
    SET_GPR_U32(ctx, 31, 0x263FE0u);
    ctx->pc = 0x263FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263FD8u;
    // 0x263fdc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260D18u, 0x263FD8u, 0x263FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FE0u;
label_263fe0:
    // 0x263fe0: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x263fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x263fe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263fe8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x263fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x263fec: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x263FECu;
    SET_GPR_U32(ctx, 31, 0x263FF4u);
    ctx->pc = 0x263FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263FECu;
    // 0x263ff0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x263FECu, 0x263FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FF4u;
label_263ff4:
    // 0x263ff4: 0x8e2302dc  lw          $v1, 0x2DC($s1)
    ctx->pc = 0x263ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x263ff8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x263ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263ffc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x263ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x264000: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x264000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x264004: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x264004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x264008: 0xae2402dc  sw          $a0, 0x2DC($s1)
    ctx->pc = 0x264008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 4));
    // 0x26400c: 0x92220116  lbu         $v0, 0x116($s1)
    ctx->pc = 0x26400cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 278)));
    // 0x264010: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x264010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x264014: 0xa2220116  sb          $v0, 0x116($s1)
    ctx->pc = 0x264014u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 278), (uint8_t)GPR_U32(ctx, 2));
label_264018:
    // 0x264018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26401c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26401cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x264020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x264020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264024: 0x3e00008  jr          $ra
    ctx->pc = 0x264024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264024u;
        // 0x264028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26402Cu;
    // 0x26402c: 0x0  nop
    ctx->pc = 0x26402cu;
    // NOP
    ctx->pc = 0x264030u;
}
