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

// Function: sub_00157300
// Address: 0x157300 - 0x1573b0
void sub_00157300_0x157300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157300_0x157300");
#endif

    switch (ctx->pc) {
        case 0x157338u: goto label_157338;
        case 0x15733cu: goto label_15733c;
        case 0x157368u: goto label_157368;
        case 0x15737cu: goto label_15737c;
        default: break;
    }

    ctx->pc = 0x157300u;

    // 0x157300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x157300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x157304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15730c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15730cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157310: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x157314: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x157314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x157318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x157318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15731c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x15731cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x157320: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x157320u;
    {
        const bool branch_taken_0x157320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157320u;
        // 0x157324: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157320) {
            ctx->pc = 0x157390u;
            goto label_157390;
        }
    }
    ctx->pc = 0x157328u;
    // 0x157328: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x157328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15732c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15732Cu;
    {
        const bool branch_taken_0x15732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15732Cu;
        // 0x157330: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15732c) {
            ctx->pc = 0x157340u;
            goto label_157340;
        }
    }
    ctx->pc = 0x157334u;
    // 0x157334: 0x0  nop
    ctx->pc = 0x157334u;
    // NOP
label_157338:
    // 0x157338: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x157338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15733c:
    // 0x15733c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x15733cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_157340:
    // 0x157340: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x157340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x157344: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x157344u;
    {
        const bool branch_taken_0x157344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157344u;
        // 0x157348: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157344) {
            ctx->pc = 0x157390u;
            goto label_157390;
        }
    }
    ctx->pc = 0x15734Cu;
    // 0x15734c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15734cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x157350: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x157350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x157354: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x157354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157358: 0x1080fff7  beqz        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x157358u;
    {
        const bool branch_taken_0x157358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157358u;
        // 0x15735c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157358) {
            ctx->pc = 0x157338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157338;
        }
    }
    ctx->pc = 0x157360u;
    // 0x157360: 0xc04f112  jal         func_13C448
    ctx->pc = 0x157360u;
    SET_GPR_U32(ctx, 31, 0x157368u);
    ctx->pc = 0x157364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157360u;
    // 0x157364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x157360u, 0x157368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157368u;
label_157368:
    // 0x157368: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x157368u;
    {
        const bool branch_taken_0x157368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x15736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157368u;
        // 0x15736c: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157368) {
            ctx->pc = 0x157380u;
            goto label_157380;
        }
    }
    ctx->pc = 0x157370u;
    // 0x157370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157374: 0xc055d16  jal         func_157458
    ctx->pc = 0x157374u;
    SET_GPR_U32(ctx, 31, 0x15737Cu);
    ctx->pc = 0x157378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157374u;
    // 0x157378: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157458u, 0x157374u, 0x15737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15737Cu;
label_15737c:
    // 0x15737c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x15737cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_157380:
    // 0x157380: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x157380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x157384: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x157384u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x157388: 0x1643ffec  bne         $s2, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x157388u;
    {
        const bool branch_taken_0x157388 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x15738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157388u;
        // 0x15738c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157388) {
            ctx->pc = 0x15733Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15733c;
        }
    }
    ctx->pc = 0x157390u;
label_157390:
    // 0x157390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157394: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157398: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x157398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15739c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15739cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1573a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1573a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1573a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1573A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1573A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573A4u;
        // 0x1573a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1573A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1573ACu;
    // 0x1573ac: 0x0  nop
    ctx->pc = 0x1573acu;
    // NOP
    ctx->pc = 0x1573b0u;
}
