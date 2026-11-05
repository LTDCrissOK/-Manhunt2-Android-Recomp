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

// Function: sub_001369D0
// Address: 0x1369d0 - 0x136a70
void sub_001369D0_0x1369d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001369D0_0x1369d0");
#endif

    switch (ctx->pc) {
        case 0x1369d0u: goto label_1369d0;
        case 0x1369d4u: goto label_1369d4;
        case 0x1369d8u: goto label_1369d8;
        case 0x1369dcu: goto label_1369dc;
        case 0x1369e0u: goto label_1369e0;
        case 0x1369e4u: goto label_1369e4;
        case 0x1369e8u: goto label_1369e8;
        case 0x1369ecu: goto label_1369ec;
        case 0x1369f0u: goto label_1369f0;
        case 0x1369f4u: goto label_1369f4;
        case 0x1369f8u: goto label_1369f8;
        case 0x1369fcu: goto label_1369fc;
        case 0x136a00u: goto label_136a00;
        case 0x136a04u: goto label_136a04;
        case 0x136a08u: goto label_136a08;
        case 0x136a0cu: goto label_136a0c;
        case 0x136a10u: goto label_136a10;
        case 0x136a14u: goto label_136a14;
        case 0x136a18u: goto label_136a18;
        case 0x136a1cu: goto label_136a1c;
        case 0x136a20u: goto label_136a20;
        case 0x136a24u: goto label_136a24;
        case 0x136a28u: goto label_136a28;
        case 0x136a2cu: goto label_136a2c;
        case 0x136a30u: goto label_136a30;
        case 0x136a34u: goto label_136a34;
        case 0x136a38u: goto label_136a38;
        case 0x136a3cu: goto label_136a3c;
        case 0x136a40u: goto label_136a40;
        case 0x136a44u: goto label_136a44;
        case 0x136a48u: goto label_136a48;
        case 0x136a4cu: goto label_136a4c;
        case 0x136a50u: goto label_136a50;
        case 0x136a54u: goto label_136a54;
        case 0x136a58u: goto label_136a58;
        case 0x136a5cu: goto label_136a5c;
        case 0x136a60u: goto label_136a60;
        case 0x136a64u: goto label_136a64;
        case 0x136a68u: goto label_136a68;
        case 0x136a6cu: goto label_136a6c;
        default: break;
    }

    ctx->pc = 0x1369d0u;

label_1369d0:
    // 0x1369d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1369d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1369d4:
    // 0x1369d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1369d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1369d8:
    // 0x1369d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1369d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1369dc:
    // 0x1369dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1369dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1369e0:
    // 0x1369e0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1369e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1369e4:
    // 0x1369e4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1369e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1369e8:
    // 0x1369e8: 0x40f809  jalr        $v0
label_1369ec:
    if (ctx->pc == 0x1369ECu) {
        ctx->pc = 0x1369F0u;
        goto label_1369f0;
    }
    ctx->pc = 0x1369E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1369F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1369E8u, 0x1369F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1369F0u;
label_1369f0:
    // 0x1369f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1369f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1369f4:
    // 0x1369f4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1369f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_1369f8:
    // 0x1369f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1369f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1369fc:
    // 0x1369fc: 0x24519a08  addiu       $s1, $v0, -0x65F8
    ctx->pc = 0x1369fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_136a00:
    // 0x136a00: 0xc0478c8  jal         func_11E320
label_136a04:
    if (ctx->pc == 0x136A04u) {
        ctx->pc = 0x136A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A00u;
        // 0x136a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A08u;
        goto label_136a08;
    }
    ctx->pc = 0x136A00u;
    SET_GPR_U32(ctx, 31, 0x136A08u);
    ctx->pc = 0x136A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A00u;
    // 0x136a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x136A00u, 0x136A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A08u;
label_136a08:
    // 0x136a08: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_136a0c:
    if (ctx->pc == 0x136A0Cu) {
        ctx->pc = 0x136A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A08u;
        // 0x136a0c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A10u;
        goto label_136a10;
    }
    ctx->pc = 0x136A08u;
    {
        const bool branch_taken_0x136a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A08u;
        // 0x136a0c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a08) {
            ctx->pc = 0x136A44u;
            goto label_136a44;
        }
    }
    ctx->pc = 0x136A10u;
label_136a10:
    // 0x136a10: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x136a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_136a14:
    // 0x136a14: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x136a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_136a18:
    // 0x136a18: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_136a1c:
    if (ctx->pc == 0x136A1Cu) {
        ctx->pc = 0x136A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A18u;
        // 0x136a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A20u;
        goto label_136a20;
    }
    ctx->pc = 0x136A18u;
    {
        const bool branch_taken_0x136a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a18) {
            ctx->pc = 0x136A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136A18u;
            // 0x136a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136A58u;
            goto label_136a58;
        }
    }
    ctx->pc = 0x136A20u;
label_136a20:
    // 0x136a20: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x136a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_136a24:
    // 0x136a24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x136a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136a28:
    // 0x136a28: 0x0  nop
    ctx->pc = 0x136a28u;
    // NOP
label_136a2c:
    // 0x136a2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x136a2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_136a30:
    // 0x136a30: 0x0  nop
    ctx->pc = 0x136a30u;
    // NOP
label_136a34:
    // 0x136a34: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_136a38:
    if (ctx->pc == 0x136A38u) {
        ctx->pc = 0x136A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A34u;
        // 0x136a38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A3Cu;
        goto label_136a3c;
    }
    ctx->pc = 0x136A34u;
    {
        const bool branch_taken_0x136a34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x136A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A34u;
        // 0x136a38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a34) {
            ctx->pc = 0x136A58u;
            goto label_136a58;
        }
    }
    ctx->pc = 0x136A3Cu;
label_136a3c:
    // 0x136a3c: 0x10000006  b           . + 4 + (0x6 << 2)
label_136a40:
    if (ctx->pc == 0x136A40u) {
        ctx->pc = 0x136A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A3Cu;
        // 0x136a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A44u;
        goto label_136a44;
    }
    ctx->pc = 0x136A3Cu;
    {
        const bool branch_taken_0x136a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A3Cu;
        // 0x136a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a3c) {
            ctx->pc = 0x136A58u;
            goto label_136a58;
        }
    }
    ctx->pc = 0x136A44u;
label_136a44:
    // 0x136a44: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x136a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_136a48:
    // 0x136a48: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x136a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_136a4c:
    // 0x136a4c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_136a50:
    if (ctx->pc == 0x136A50u) {
        ctx->pc = 0x136A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A4Cu;
        // 0x136a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A54u;
        goto label_136a54;
    }
    ctx->pc = 0x136A4Cu;
    {
        const bool branch_taken_0x136a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a4c) {
            ctx->pc = 0x136A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136A4Cu;
            // 0x136a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136A58u;
            goto label_136a58;
        }
    }
    ctx->pc = 0x136A54u;
label_136a54:
    // 0x136a54: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x136a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_136a58:
    // 0x136a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_136a5c:
    // 0x136a5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_136a60:
    // 0x136a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_136a64:
    // 0x136a64: 0x3e00008  jr          $ra
label_136a68:
    if (ctx->pc == 0x136A68u) {
        ctx->pc = 0x136A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A64u;
        // 0x136a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A6Cu;
        goto label_136a6c;
    }
    ctx->pc = 0x136A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A64u;
        // 0x136a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136A6Cu;
label_136a6c:
    // 0x136a6c: 0x0  nop
    ctx->pc = 0x136a6cu;
    // NOP
    ctx->pc = 0x136a70u;
}
