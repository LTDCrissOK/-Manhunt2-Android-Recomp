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

// Function: sub_003D4520
// Address: 0x3d4520 - 0x3d45c0
void sub_003D4520_0x3d4520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4520_0x3d4520");
#endif

    switch (ctx->pc) {
        case 0x3d4538u: goto label_3d4538;
        case 0x3d4550u: goto label_3d4550;
        default: break;
    }

    ctx->pc = 0x3d4520u;

    // 0x3d4520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d4520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d4524: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x3d4524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x3d4528: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d4528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d452c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d452cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d4530: 0xc0f4eae  jal         func_3D3AB8
    ctx->pc = 0x3D4530u;
    SET_GPR_U32(ctx, 31, 0x3D4538u);
    ctx->pc = 0x3D4534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4530u;
    // 0x3d4534: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3AB8u, 0x3D4530u, 0x3D4538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4538u;
label_3d4538:
    // 0x3d4538: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3d4538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d453c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x3d453cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x3d4540: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4540u;
    {
        const bool branch_taken_0x3d4540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4540u;
        // 0x3d4544: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4540) {
            ctx->pc = 0x3D4550u;
            goto label_3d4550;
        }
    }
    ctx->pc = 0x3D4548u;
    // 0x3d4548: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4548u;
    {
        const bool branch_taken_0x3d4548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4548u;
        // 0x3d454c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4548) {
            ctx->pc = 0x3D4558u;
            goto label_3d4558;
        }
    }
    ctx->pc = 0x3D4550u;
label_3d4550:
    // 0x3d4550: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3D4550u;
    {
        const bool branch_taken_0x3d4550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4550u;
        // 0x3d4554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4550) {
            ctx->pc = 0x3D45B4u;
            goto label_3d45b4;
        }
    }
    ctx->pc = 0x3D4558u;
label_3d4558:
    // 0x3d4558: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D4558u;
    {
        const bool branch_taken_0x3d4558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4558u;
        // 0x3d455c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4558) {
            ctx->pc = 0x3D45B4u;
            goto label_3d45b4;
        }
    }
    ctx->pc = 0x3D4560u;
    // 0x3d4560: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x3d4560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x3d4564: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D4564u;
    {
        const bool branch_taken_0x3d4564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4564u;
        // 0x3d4568: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4564) {
            ctx->pc = 0x3D457Cu;
            goto label_3d457c;
        }
    }
    ctx->pc = 0x3D456Cu;
    // 0x3d456c: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3D456Cu;
    {
        const bool branch_taken_0x3d456c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3D4570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D456Cu;
        // 0x3d4570: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d456c) {
            ctx->pc = 0x3D4550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4550;
        }
    }
    ctx->pc = 0x3D4574u;
    // 0x3d4574: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4574u;
    {
        const bool branch_taken_0x3d4574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4574) {
            ctx->pc = 0x3D4578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4574u;
            // 0x3d4578: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4588u;
            goto label_3d4588;
        }
    }
    ctx->pc = 0x3D457Cu;
label_3d457c:
    // 0x3d457c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d457cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3d4580: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D4580u;
    {
        const bool branch_taken_0x3d4580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4580u;
        // 0x3d4584: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4580) {
            ctx->pc = 0x3D45B4u;
            goto label_3d45b4;
        }
    }
    ctx->pc = 0x3D4588u;
label_3d4588:
    // 0x3d4588: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D4588u;
    {
        const bool branch_taken_0x3d4588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4588u;
        // 0x3d458c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4588) {
            ctx->pc = 0x3D45A0u;
            goto label_3d45a0;
        }
    }
    ctx->pc = 0x3D4590u;
    // 0x3d4590: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x3d4590u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d4594: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x3d4594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x3d4598: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4598u;
    {
        const bool branch_taken_0x3d4598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4598u;
        // 0x3d459c: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4598) {
            ctx->pc = 0x3D45ACu;
            goto label_3d45ac;
        }
    }
    ctx->pc = 0x3D45A0u;
label_3d45a0:
    // 0x3d45a0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x3d45a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d45a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3d45a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d45a8: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x3d45a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_3d45ac:
    // 0x3d45ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d45acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d45b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d45b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3d45b4:
    // 0x3d45b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d45b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d45b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D45B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45B8u;
        // 0x3d45bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D45B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D45C0u;
}
