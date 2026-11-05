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

// Function: sub_00128188
// Address: 0x128188 - 0x128230
void sub_00128188_0x128188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128188_0x128188");
#endif

    switch (ctx->pc) {
        case 0x1281b8u: goto label_1281b8;
        case 0x128214u: goto label_128214;
        default: break;
    }

    ctx->pc = 0x128188u;

    // 0x128188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12818c: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x12818cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x128190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128194: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x128194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x128198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x128198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12819c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12819cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281a0: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1281a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1281a4: 0x92020e80  lbu         $v0, 0xE80($s0)
    ctx->pc = 0x1281a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
    // 0x1281a8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1281a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1281ac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1281ACu;
    {
        const bool branch_taken_0x1281ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281ACu;
        // 0x1281b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281ac) {
            ctx->pc = 0x12820Cu;
            goto label_12820c;
        }
    }
    ctx->pc = 0x1281B4u;
    // 0x1281b4: 0x0  nop
    ctx->pc = 0x1281b4u;
    // NOP
label_1281b8:
    // 0x1281b8: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x1281b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1281bc: 0x82140  sll         $a0, $t0, 5
    ctx->pc = 0x1281bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1281c0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1281c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1281c4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1281c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1281c8: 0x24630a80  addiu       $v1, $v1, 0xA80
    ctx->pc = 0x1281c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2688));
    // 0x1281cc: 0x24840a80  addiu       $a0, $a0, 0xA80
    ctx->pc = 0x1281ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2688));
    // 0x1281d0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1281d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1281d4: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1281d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1281d8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1281d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1281dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1281dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1281e0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1281e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1281e4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1281e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1281e8: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1281e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1281ec: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x1281ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1281f0: 0x92020e80  lbu         $v0, 0xE80($s0)
    ctx->pc = 0x1281f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
    // 0x1281f4: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x1281f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1281f8: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1281f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1281fc: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1281fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128200: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x128200u;
    {
        const bool branch_taken_0x128200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128200u;
        // 0x128204: 0x306800ff  andi        $t0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128200) {
            ctx->pc = 0x1281B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1281b8;
        }
    }
    ctx->pc = 0x128208u;
    // 0x128208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12820c:
    // 0x12820c: 0xc049fd4  jal         func_127F50
    ctx->pc = 0x12820Cu;
    SET_GPR_U32(ctx, 31, 0x128214u);
    ctx->pc = 0x128210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12820Cu;
    // 0x128210: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F50u, 0x12820Cu, 0x128214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128214u;
label_128214:
    // 0x128214: 0x92020e80  lbu         $v0, 0xE80($s0)
    ctx->pc = 0x128214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
    // 0x128218: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x128218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12821c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x128220: 0xa2020e80  sb          $v0, 0xE80($s0)
    ctx->pc = 0x128220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3712), (uint8_t)GPR_U32(ctx, 2));
    // 0x128224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128228: 0x3e00008  jr          $ra
    ctx->pc = 0x128228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128228u;
        // 0x12822c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128230u;
}
