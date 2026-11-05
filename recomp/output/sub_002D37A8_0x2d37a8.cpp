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

// Function: sub_002D37A8
// Address: 0x2d37a8 - 0x2d3840
void sub_002D37A8_0x2d37a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D37A8_0x2d37a8");
#endif

    switch (ctx->pc) {
        case 0x2d37dcu: goto label_2d37dc;
        case 0x2d3818u: goto label_2d3818;
        default: break;
    }

    ctx->pc = 0x2d37a8u;

    // 0x2d37a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d37a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d37ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d37acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d37b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d37b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d37b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d37b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d37b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d37b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d37bc: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2d37bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d37c0: 0x92020064  lbu         $v0, 0x64($s0)
    ctx->pc = 0x2d37c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2d37c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D37C4u;
    {
        const bool branch_taken_0x2d37c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D37C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37C4u;
        // 0x2d37c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37c4) {
            ctx->pc = 0x2D37D8u;
            goto label_2d37d8;
        }
    }
    ctx->pc = 0x2D37CCu;
    // 0x2d37cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D37CCu;
    {
        const bool branch_taken_0x2d37cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37CCu;
        // 0x2d37d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37cc) {
            ctx->pc = 0x2D37F8u;
            goto label_2d37f8;
        }
    }
    ctx->pc = 0x2D37D4u;
    // 0x2d37d4: 0x0  nop
    ctx->pc = 0x2d37d4u;
    // NOP
label_2d37d8:
    // 0x2d37d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d37d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2d37dc:
    // 0x2d37dc: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2d37dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d37e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D37E0u;
    {
        const bool branch_taken_0x2d37e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37E0u;
        // 0x2d37e4: 0x2041021  addu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37e0) {
            ctx->pc = 0x2D37F8u;
            goto label_2d37f8;
        }
    }
    ctx->pc = 0x2D37E8u;
    // 0x2d37e8: 0x90430064  lbu         $v1, 0x64($v0)
    ctx->pc = 0x2d37e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2d37ec: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D37ECu;
    {
        const bool branch_taken_0x2d37ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d37ec) {
            ctx->pc = 0x2D37F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D37ECu;
            // 0x2d37f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D37DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d37dc;
        }
    }
    ctx->pc = 0x2D37F4u;
    // 0x2d37f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d37f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d37f8:
    // 0x2d37f8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D37F8u;
    {
        const bool branch_taken_0x2d37f8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2D37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37F8u;
        // 0x2d37fc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37f8) {
            ctx->pc = 0x2D3808u;
            goto label_2d3808;
        }
    }
    ctx->pc = 0x2D3800u;
    // 0x2d3800: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D3800u;
    {
        const bool branch_taken_0x2d3800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3800u;
        // 0x2d3804: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3800) {
            ctx->pc = 0x2D382Cu;
            goto label_2d382c;
        }
    }
    ctx->pc = 0x2D3808u;
label_2d3808:
    // 0x2d3808: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x2d3808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d380c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2d380cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2d3810: 0xc0b4cc6  jal         func_2D3318
    ctx->pc = 0x2D3810u;
    SET_GPR_U32(ctx, 31, 0x2D3818u);
    ctx->pc = 0x2D3814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3810u;
    // 0x2d3814: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3318u, 0x2D3810u, 0x2D3818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3818u;
label_2d3818:
    // 0x2d3818: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x2d3818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2d381c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d381cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3820: 0xa0620064  sb          $v0, 0x64($v1)
    ctx->pc = 0x2d3820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d3824: 0x222200b  movn        $a0, $s1, $v0
    ctx->pc = 0x2d3824u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
    // 0x2d3828: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d3828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d382c:
    // 0x2d382c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d382cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3830: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d3830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3834: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d3834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3838: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3838u;
        // 0x2d383c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3840u;
}
