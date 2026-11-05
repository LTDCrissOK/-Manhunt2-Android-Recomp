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

// Function: sub_00213268
// Address: 0x213268 - 0x2132e8
void sub_00213268_0x213268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213268_0x213268");
#endif

    switch (ctx->pc) {
        case 0x2132b8u: goto label_2132b8;
        default: break;
    }

    ctx->pc = 0x213268u;

    // 0x213268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21326c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213270: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x213274: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x213274u;
    {
        const bool branch_taken_0x213274 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x213278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213274u;
        // 0x213278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213274) {
            ctx->pc = 0x2132A0u;
            goto label_2132a0;
        }
    }
    ctx->pc = 0x21327Cu;
    // 0x21327c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x21327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x213280: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x213280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x213284: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x213284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x213288: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x213288u;
    {
        const bool branch_taken_0x213288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213288u;
        // 0x21328c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213288) {
            ctx->pc = 0x2132D4u;
            goto label_2132d4;
        }
    }
    ctx->pc = 0x213290u;
    // 0x213290: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x213290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x213294: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x213294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x213298: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x213298u;
    {
        const bool branch_taken_0x213298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213298u;
        // 0x21329c: 0xa0620032  sb          $v0, 0x32($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213298) {
            ctx->pc = 0x2132D4u;
            goto label_2132d4;
        }
    }
    ctx->pc = 0x2132A0u;
label_2132a0:
    // 0x2132a0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2132a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2132a4: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2132a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2132a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2132a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2132acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2132b0: 0xc0843ea  jal         func_210FA8
    ctx->pc = 0x2132B0u;
    SET_GPR_U32(ctx, 31, 0x2132B8u);
    ctx->pc = 0x2132B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132B0u;
    // 0x2132b4: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FA8u, 0x2132B0u, 0x2132B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2132B8u;
label_2132b8:
    // 0x2132b8: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x2132b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2132bc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2132BCu;
    {
        const bool branch_taken_0x2132bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132BCu;
        // 0x2132c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132bc) {
            ctx->pc = 0x2132D8u;
            goto label_2132d8;
        }
    }
    ctx->pc = 0x2132C4u;
    // 0x2132c4: 0x90820032  lbu         $v0, 0x32($a0)
    ctx->pc = 0x2132c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x2132c8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2132c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2132cc: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x2132ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x2132d0: 0xa0820032  sb          $v0, 0x32($a0)
    ctx->pc = 0x2132d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 2));
label_2132d4:
    // 0x2132d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2132d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2132d8:
    // 0x2132d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2132d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2132dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2132DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2132E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132DCu;
        // 0x2132e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2132DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2132E4u;
    // 0x2132e4: 0x0  nop
    ctx->pc = 0x2132e4u;
    // NOP
    ctx->pc = 0x2132e8u;
}
