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

// Function: sub_00226750
// Address: 0x226750 - 0x2267d8
void sub_00226750_0x226750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226750_0x226750");
#endif

    switch (ctx->pc) {
        case 0x226780u: goto label_226780;
        default: break;
    }

    ctx->pc = 0x226750u;

    // 0x226750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x226758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22675c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22675cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x226760: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x226760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226764: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x226764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x226768: 0x3862000a  xori        $v0, $v1, 0xA
    ctx->pc = 0x226768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x22676c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22676Cu;
    {
        const bool branch_taken_0x22676c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22676Cu;
        // 0x226770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22676c) {
            ctx->pc = 0x226794u;
            goto label_226794;
        }
    }
    ctx->pc = 0x226774u;
    // 0x226774: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x226774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x226778: 0xc0899a6  jal         func_226698
    ctx->pc = 0x226778u;
    SET_GPR_U32(ctx, 31, 0x226780u);
    ctx->pc = 0x22677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226778u;
    // 0x22677c: 0xae020254  sw          $v0, 0x254($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226698u, 0x226778u, 0x226780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226780u;
label_226780:
    // 0x226780: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x226780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x226784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226788: 0xa2020280  sb          $v0, 0x280($s0)
    ctx->pc = 0x226788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 640), (uint8_t)GPR_U32(ctx, 2));
    // 0x22678c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22678Cu;
    {
        const bool branch_taken_0x22678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22678Cu;
        // 0x226790: 0xae03025c  sw          $v1, 0x25C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22678c) {
            ctx->pc = 0x2267C4u;
            goto label_2267c4;
        }
    }
    ctx->pc = 0x226794u;
label_226794:
    // 0x226794: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x226794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x226798: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x226798u;
    {
        const bool branch_taken_0x226798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226798) {
            ctx->pc = 0x22679Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226798u;
            // 0x22679c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2267C8u;
            goto label_2267c8;
        }
    }
    ctx->pc = 0x2267A0u;
    // 0x2267a0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2267a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2267a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2267a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2267a8: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x2267a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x2267ac: 0x84440054  lh          $a0, 0x54($v0)
    ctx->pc = 0x2267acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2267b0: 0xae050254  sw          $a1, 0x254($s0)
    ctx->pc = 0x2267b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 5));
    // 0x2267b4: 0xae04027c  sw          $a0, 0x27C($s0)
    ctx->pc = 0x2267b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 4));
    // 0x2267b8: 0xa2000280  sb          $zero, 0x280($s0)
    ctx->pc = 0x2267b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 640), (uint8_t)GPR_U32(ctx, 0));
    // 0x2267bc: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x2267bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x2267c0: 0xae00025c  sw          $zero, 0x25C($s0)
    ctx->pc = 0x2267c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
label_2267c4:
    // 0x2267c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2267c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2267c8:
    // 0x2267c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2267c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2267cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2267ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2267d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2267D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2267D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267D0u;
        // 0x2267d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2267D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2267D8u;
}
