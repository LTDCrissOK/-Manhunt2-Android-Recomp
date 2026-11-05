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

// Function: sub_00128460
// Address: 0x128460 - 0x128500
void sub_00128460_0x128460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128460_0x128460");
#endif

    switch (ctx->pc) {
        case 0x128484u: goto label_128484;
        case 0x128494u: goto label_128494;
        case 0x1284acu: goto label_1284ac;
        default: break;
    }

    ctx->pc = 0x128460u;

    // 0x128460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128468: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12846c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12846cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128470: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x128470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128474: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x128474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x128478: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x128478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12847c: 0xc04a162  jal         func_128588
    ctx->pc = 0x12847Cu;
    SET_GPR_U32(ctx, 31, 0x128484u);
    ctx->pc = 0x128480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12847Cu;
    // 0x128480: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128588u, 0x12847Cu, 0x128484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128484u;
label_128484:
    // 0x128484: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x128484u;
    {
        const bool branch_taken_0x128484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x128488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128484u;
        // 0x128488: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128484) {
            ctx->pc = 0x128494u;
            goto label_128494;
        }
    }
    ctx->pc = 0x12848Cu;
    // 0x12848c: 0xc04a140  jal         func_128500
    ctx->pc = 0x12848Cu;
    SET_GPR_U32(ctx, 31, 0x128494u);
    ctx->pc = 0x128490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12848Cu;
    // 0x128490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128500u, 0x12848Cu, 0x128494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128494u;
label_128494:
    // 0x128494: 0x92020f90  lbu         $v0, 0xF90($s0)
    ctx->pc = 0x128494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3984)));
    // 0x128498: 0x14520006  bne         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x128498u;
    {
        const bool branch_taken_0x128498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x12849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128498u;
        // 0x12849c: 0x21140  sll         $v0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128498) {
            ctx->pc = 0x1284B4u;
            goto label_1284b4;
        }
    }
    ctx->pc = 0x1284A0u;
    // 0x1284a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1284a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284a4: 0xc04a140  jal         func_128500
    ctx->pc = 0x1284A4u;
    SET_GPR_U32(ctx, 31, 0x1284ACu);
    ctx->pc = 0x1284A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284A4u;
    // 0x1284a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128500u, 0x1284A4u, 0x1284ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284ACu;
label_1284ac:
    // 0x1284ac: 0x92020f90  lbu         $v0, 0xF90($s0)
    ctx->pc = 0x1284acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3984)));
    // 0x1284b0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1284b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1284b4:
    // 0x1284b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1284b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1284b8: 0xac510e90  sw          $s1, 0xE90($v0)
    ctx->pc = 0x1284b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3728), GPR_U32(ctx, 17));
    // 0x1284bc: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x1284bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1284c0: 0x92030f90  lbu         $v1, 0xF90($s0)
    ctx->pc = 0x1284c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3984)));
    // 0x1284c4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1284c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1284c8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1284c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1284cc: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x1284ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1284d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1284d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1284d4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1284d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1284d8: 0xf8610ea0  sqc2        $vf1, 0xEA0($v1)
    ctx->pc = 0x1284d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 3744), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1284dc: 0x92020f90  lbu         $v0, 0xF90($s0)
    ctx->pc = 0x1284dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3984)));
    // 0x1284e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1284e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1284e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1284e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1284e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1284e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1284ec: 0xa2020f90  sb          $v0, 0xF90($s0)
    ctx->pc = 0x1284ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3984), (uint8_t)GPR_U32(ctx, 2));
    // 0x1284f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1284f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1284f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1284f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1284f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1284F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1284FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284F8u;
        // 0x1284fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1284F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128500u;
}
