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

// Function: sub_002544F8
// Address: 0x2544f8 - 0x254558
void sub_002544F8_0x2544f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002544F8_0x2544f8");
#endif

    switch (ctx->pc) {
        case 0x254524u: goto label_254524;
        case 0x254540u: goto label_254540;
        default: break;
    }

    ctx->pc = 0x2544f8u;

    // 0x2544f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2544f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2544fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2544fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254500: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x254504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254508: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x254508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x25450c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x25450cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x254510: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x254510u;
    {
        const bool branch_taken_0x254510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254510) {
            ctx->pc = 0x254514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254510u;
            // 0x254514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254544u;
            goto label_254544;
        }
    }
    ctx->pc = 0x254518u;
    // 0x254518: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x254518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x25451c: 0xc0944da  jal         func_251368
    ctx->pc = 0x25451Cu;
    SET_GPR_U32(ctx, 31, 0x254524u);
    ctx->pc = 0x254520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25451Cu;
    // 0x254520: 0xae021060  sw          $v0, 0x1060($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x25451Cu, 0x254524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254524u;
label_254524:
    // 0x254524: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x254524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x254528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25452c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25452cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254530: 0xac62035c  sw          $v0, 0x35C($v1)
    ctx->pc = 0x254530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
    // 0x254534: 0x8e051004  lw          $a1, 0x1004($s0)
    ctx->pc = 0x254534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x254538: 0xc061b42  jal         func_186D08
    ctx->pc = 0x254538u;
    SET_GPR_U32(ctx, 31, 0x254540u);
    ctx->pc = 0x25453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254538u;
    // 0x25453c: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D08u, 0x254538u, 0x254540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254540u;
label_254540:
    // 0x254540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254544:
    // 0x254544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254548: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x254548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25454c: 0x3e00008  jr          $ra
    ctx->pc = 0x25454Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25454Cu;
        // 0x254550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25454Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254554u;
    // 0x254554: 0x0  nop
    ctx->pc = 0x254554u;
    // NOP
    ctx->pc = 0x254558u;
}
