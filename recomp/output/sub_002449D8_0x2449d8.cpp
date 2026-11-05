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

// Function: sub_002449D8
// Address: 0x2449d8 - 0x244a60
void sub_002449D8_0x2449d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002449D8_0x2449d8");
#endif

    switch (ctx->pc) {
        case 0x244a28u: goto label_244a28;
        case 0x244a38u: goto label_244a38;
        case 0x244a4cu: goto label_244a4c;
        default: break;
    }

    ctx->pc = 0x2449d8u;

    // 0x2449d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2449d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2449dc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2449dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2449e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2449e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2449e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2449e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2449e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2449e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2449ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2449ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2449f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2449f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2449f4: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x2449f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x2449f8: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x2449f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2449fc: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x2449fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244a00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x244a00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244a04: 0x0  nop
    ctx->pc = 0x244a04u;
    // NOP
    // 0x244a08: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x244A08u;
    {
        const bool branch_taken_0x244a08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244a08) {
            ctx->pc = 0x244A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244A08u;
            // 0x244a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244A40u;
            goto label_244a40;
        }
    }
    ctx->pc = 0x244A10u;
    // 0x244a10: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x244a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x244a14: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x244a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x244a18: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x244A18u;
    {
        const bool branch_taken_0x244a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244a18) {
            ctx->pc = 0x244A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244A18u;
            // 0x244a1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244A50u;
            goto label_244a50;
        }
    }
    ctx->pc = 0x244A20u;
    // 0x244a20: 0xc0895d0  jal         func_225740
    ctx->pc = 0x244A20u;
    SET_GPR_U32(ctx, 31, 0x244A28u);
    ctx->pc = 0x225740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225740u, 0x244A20u, 0x244A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A28u;
label_244a28:
    // 0x244a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244a2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x244a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244a30: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x244A30u;
    SET_GPR_U32(ctx, 31, 0x244A38u);
    ctx->pc = 0x244A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244A30u;
    // 0x244a34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x244A30u, 0x244A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A38u;
label_244a38:
    // 0x244a38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x244A38u;
    {
        const bool branch_taken_0x244a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A38u;
        // 0x244a3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a38) {
            ctx->pc = 0x244A50u;
            goto label_244a50;
        }
    }
    ctx->pc = 0x244A40u;
label_244a40:
    // 0x244a40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x244a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244a44: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x244A44u;
    SET_GPR_U32(ctx, 31, 0x244A4Cu);
    ctx->pc = 0x244A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244A44u;
    // 0x244a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x244A44u, 0x244A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A4Cu;
label_244a4c:
    // 0x244a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244a50:
    // 0x244a50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x244a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x244a54: 0x3e00008  jr          $ra
    ctx->pc = 0x244A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A54u;
        // 0x244a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244A5Cu;
    // 0x244a5c: 0x0  nop
    ctx->pc = 0x244a5cu;
    // NOP
    ctx->pc = 0x244a60u;
}
