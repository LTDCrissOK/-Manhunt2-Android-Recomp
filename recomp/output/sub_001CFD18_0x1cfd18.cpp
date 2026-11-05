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

// Function: sub_001CFD18
// Address: 0x1cfd18 - 0x1cfe00
void sub_001CFD18_0x1cfd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFD18_0x1cfd18");
#endif

    switch (ctx->pc) {
        case 0x1cfd18u: goto label_1cfd18;
        case 0x1cfd1cu: goto label_1cfd1c;
        case 0x1cfd20u: goto label_1cfd20;
        case 0x1cfd24u: goto label_1cfd24;
        case 0x1cfd28u: goto label_1cfd28;
        case 0x1cfd2cu: goto label_1cfd2c;
        case 0x1cfd30u: goto label_1cfd30;
        case 0x1cfd34u: goto label_1cfd34;
        case 0x1cfd38u: goto label_1cfd38;
        case 0x1cfd3cu: goto label_1cfd3c;
        case 0x1cfd40u: goto label_1cfd40;
        case 0x1cfd44u: goto label_1cfd44;
        case 0x1cfd48u: goto label_1cfd48;
        case 0x1cfd4cu: goto label_1cfd4c;
        case 0x1cfd50u: goto label_1cfd50;
        case 0x1cfd54u: goto label_1cfd54;
        case 0x1cfd58u: goto label_1cfd58;
        case 0x1cfd5cu: goto label_1cfd5c;
        case 0x1cfd60u: goto label_1cfd60;
        case 0x1cfd64u: goto label_1cfd64;
        case 0x1cfd68u: goto label_1cfd68;
        case 0x1cfd6cu: goto label_1cfd6c;
        case 0x1cfd70u: goto label_1cfd70;
        case 0x1cfd74u: goto label_1cfd74;
        case 0x1cfd78u: goto label_1cfd78;
        case 0x1cfd7cu: goto label_1cfd7c;
        case 0x1cfd80u: goto label_1cfd80;
        case 0x1cfd84u: goto label_1cfd84;
        case 0x1cfd88u: goto label_1cfd88;
        case 0x1cfd8cu: goto label_1cfd8c;
        case 0x1cfd90u: goto label_1cfd90;
        case 0x1cfd94u: goto label_1cfd94;
        case 0x1cfd98u: goto label_1cfd98;
        case 0x1cfd9cu: goto label_1cfd9c;
        case 0x1cfda0u: goto label_1cfda0;
        case 0x1cfda4u: goto label_1cfda4;
        case 0x1cfda8u: goto label_1cfda8;
        case 0x1cfdacu: goto label_1cfdac;
        case 0x1cfdb0u: goto label_1cfdb0;
        case 0x1cfdb4u: goto label_1cfdb4;
        case 0x1cfdb8u: goto label_1cfdb8;
        case 0x1cfdbcu: goto label_1cfdbc;
        case 0x1cfdc0u: goto label_1cfdc0;
        case 0x1cfdc4u: goto label_1cfdc4;
        case 0x1cfdc8u: goto label_1cfdc8;
        case 0x1cfdccu: goto label_1cfdcc;
        case 0x1cfdd0u: goto label_1cfdd0;
        case 0x1cfdd4u: goto label_1cfdd4;
        case 0x1cfdd8u: goto label_1cfdd8;
        case 0x1cfddcu: goto label_1cfddc;
        case 0x1cfde0u: goto label_1cfde0;
        case 0x1cfde4u: goto label_1cfde4;
        case 0x1cfde8u: goto label_1cfde8;
        case 0x1cfdecu: goto label_1cfdec;
        case 0x1cfdf0u: goto label_1cfdf0;
        case 0x1cfdf4u: goto label_1cfdf4;
        case 0x1cfdf8u: goto label_1cfdf8;
        case 0x1cfdfcu: goto label_1cfdfc;
        default: break;
    }

    ctx->pc = 0x1cfd18u;

label_1cfd18:
    // 0x1cfd18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cfd1c:
    // 0x1cfd1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cfd20:
    // 0x1cfd20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1cfd24:
    // 0x1cfd24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cfd28:
    // 0x1cfd28: 0x9603002a  lhu         $v1, 0x2A($s0)
    ctx->pc = 0x1cfd28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
label_1cfd2c:
    // 0x1cfd2c: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x1cfd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_1cfd30:
    // 0x1cfd30: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1cfd34:
    if (ctx->pc == 0x1CFD34u) {
        ctx->pc = 0x1CFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD30u;
        // 0x1cfd34: 0x9602002a  lhu         $v0, 0x2A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD38u;
        goto label_1cfd38;
    }
    ctx->pc = 0x1CFD30u;
    {
        const bool branch_taken_0x1cfd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd30) {
            ctx->pc = 0x1CFD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFD30u;
            // 0x1cfd34: 0x9602002a  lhu         $v0, 0x2A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFD98u;
            goto label_1cfd98;
        }
    }
    ctx->pc = 0x1CFD38u;
label_1cfd38:
    // 0x1cfd38: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1cfd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1cfd3c:
    // 0x1cfd3c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1cfd40:
    if (ctx->pc == 0x1CFD40u) {
        ctx->pc = 0x1CFD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD3Cu;
        // 0x1cfd40: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD44u;
        goto label_1cfd44;
    }
    ctx->pc = 0x1CFD3Cu;
    {
        const bool branch_taken_0x1cfd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD3Cu;
        // 0x1cfd40: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd3c) {
            ctx->pc = 0x1CFDF0u;
            goto label_1cfdf0;
        }
    }
    ctx->pc = 0x1CFD44u;
label_1cfd44:
    // 0x1cfd44: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_1cfd48:
    if (ctx->pc == 0x1CFD48u) {
        ctx->pc = 0x1CFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD44u;
        // 0x1cfd48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD4Cu;
        goto label_1cfd4c;
    }
    ctx->pc = 0x1CFD44u;
    {
        const bool branch_taken_0x1cfd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd44) {
            ctx->pc = 0x1CFD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFD44u;
            // 0x1cfd48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFDF4u;
            goto label_1cfdf4;
        }
    }
    ctx->pc = 0x1CFD4Cu;
label_1cfd4c:
    // 0x1cfd4c: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1cfd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1cfd50:
    // 0x1cfd50: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1cfd54:
    if (ctx->pc == 0x1CFD54u) {
        ctx->pc = 0x1CFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD50u;
        // 0x1cfd54: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD58u;
        goto label_1cfd58;
    }
    ctx->pc = 0x1CFD50u;
    {
        const bool branch_taken_0x1cfd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd50) {
            ctx->pc = 0x1CFD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFD50u;
            // 0x1cfd54: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFD7Cu;
            goto label_1cfd7c;
        }
    }
    ctx->pc = 0x1CFD58u;
label_1cfd58:
    // 0x1cfd58: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1cfd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfd5c:
    // 0x1cfd5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfd5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfd60:
    // 0x1cfd60: 0x0  nop
    ctx->pc = 0x1cfd60u;
    // NOP
label_1cfd64:
    // 0x1cfd64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cfd64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfd68:
    // 0x1cfd68: 0x0  nop
    ctx->pc = 0x1cfd68u;
    // NOP
label_1cfd6c:
    // 0x1cfd6c: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_1cfd70:
    if (ctx->pc == 0x1CFD70u) {
        ctx->pc = 0x1CFD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD6Cu;
        // 0x1cfd70: 0x9602002a  lhu         $v0, 0x2A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD74u;
        goto label_1cfd74;
    }
    ctx->pc = 0x1CFD6Cu;
    {
        const bool branch_taken_0x1cfd6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfd6c) {
            ctx->pc = 0x1CFD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFD6Cu;
            // 0x1cfd70: 0x9602002a  lhu         $v0, 0x2A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFD98u;
            goto label_1cfd98;
        }
    }
    ctx->pc = 0x1CFD74u;
label_1cfd74:
    // 0x1cfd74: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1cfd78:
    if (ctx->pc == 0x1CFD78u) {
        ctx->pc = 0x1CFD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD74u;
        // 0x1cfd78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD7Cu;
        goto label_1cfd7c;
    }
    ctx->pc = 0x1CFD74u;
    {
        const bool branch_taken_0x1cfd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD74u;
        // 0x1cfd78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd74) {
            ctx->pc = 0x1CFDF4u;
            goto label_1cfdf4;
        }
    }
    ctx->pc = 0x1CFD7Cu;
label_1cfd7c:
    // 0x1cfd7c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1cfd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfd80:
    // 0x1cfd80: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1cfd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfd84:
    // 0x1cfd84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cfd84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfd88:
    // 0x1cfd88: 0x0  nop
    ctx->pc = 0x1cfd88u;
    // NOP
label_1cfd8c:
    // 0x1cfd8c: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
label_1cfd90:
    if (ctx->pc == 0x1CFD90u) {
        ctx->pc = 0x1CFD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD8Cu;
        // 0x1cfd90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD94u;
        goto label_1cfd94;
    }
    ctx->pc = 0x1CFD8Cu;
    {
        const bool branch_taken_0x1cfd8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfd8c) {
            ctx->pc = 0x1CFD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFD8Cu;
            // 0x1cfd90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFDF4u;
            goto label_1cfdf4;
        }
    }
    ctx->pc = 0x1CFD94u;
label_1cfd94:
    // 0x1cfd94: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1cfd94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
label_1cfd98:
    // 0x1cfd98: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x1cfd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1cfd9c:
    // 0x1cfd9c: 0x3042f7fd  andi        $v0, $v0, 0xF7FD
    ctx->pc = 0x1cfd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63485);
label_1cfda0:
    // 0x1cfda0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1cfda4:
    if (ctx->pc == 0x1CFDA4u) {
        ctx->pc = 0x1CFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDA0u;
        // 0x1cfda4: 0xa602002a  sh          $v0, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDA8u;
        goto label_1cfda8;
    }
    ctx->pc = 0x1CFDA0u;
    {
        const bool branch_taken_0x1cfda0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDA0u;
        // 0x1cfda4: 0xa602002a  sh          $v0, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfda0) {
            ctx->pc = 0x1CFDB8u;
            goto label_1cfdb8;
        }
    }
    ctx->pc = 0x1CFDA8u;
label_1cfda8:
    // 0x1cfda8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1cfda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1cfdac:
    // 0x1cfdac: 0x40f809  jalr        $v0
label_1cfdb0:
    if (ctx->pc == 0x1CFDB0u) {
        ctx->pc = 0x1CFDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDACu;
        // 0x1cfdb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDB4u;
        goto label_1cfdb4;
    }
    ctx->pc = 0x1CFDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CFDB4u);
        ctx->pc = 0x1CFDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDACu;
        // 0x1cfdb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFDACu, 0x1CFDB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFDB4u;
label_1cfdb4:
    // 0x1cfdb4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1cfdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1cfdb8:
    // 0x1cfdb8: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1cfdb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
label_1cfdbc:
    // 0x1cfdbc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1cfdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1cfdc0:
    // 0x1cfdc0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1cfdc4:
    if (ctx->pc == 0x1CFDC4u) {
        ctx->pc = 0x1CFDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDC0u;
        // 0x1cfdc4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDC8u;
        goto label_1cfdc8;
    }
    ctx->pc = 0x1CFDC0u;
    {
        const bool branch_taken_0x1cfdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfdc0) {
            ctx->pc = 0x1CFDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFDC0u;
            // 0x1cfdc4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFDD0u;
            goto label_1cfdd0;
        }
    }
    ctx->pc = 0x1CFDC8u;
label_1cfdc8:
    // 0x1cfdc8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cfdcc:
    if (ctx->pc == 0x1CFDCCu) {
        ctx->pc = 0x1CFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDC8u;
        // 0x1cfdcc: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDD0u;
        goto label_1cfdd0;
    }
    ctx->pc = 0x1CFDC8u;
    {
        const bool branch_taken_0x1cfdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDC8u;
        // 0x1cfdcc: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdc8) {
            ctx->pc = 0x1CFDD8u;
            goto label_1cfdd8;
        }
    }
    ctx->pc = 0x1CFDD0u;
label_1cfdd0:
    // 0x1cfdd0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1cfdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfdd4:
    // 0x1cfdd4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1cfdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_1cfdd8:
    // 0x1cfdd8: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1cfdd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
label_1cfddc:
    // 0x1cfddc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1cfddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1cfde0:
    // 0x1cfde0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1cfde4:
    if (ctx->pc == 0x1CFDE4u) {
        ctx->pc = 0x1CFDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDE0u;
        // 0x1cfde4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDE8u;
        goto label_1cfde8;
    }
    ctx->pc = 0x1CFDE0u;
    {
        const bool branch_taken_0x1cfde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfde0) {
            ctx->pc = 0x1CFDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFDE0u;
            // 0x1cfde4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFDF4u;
            goto label_1cfdf4;
        }
    }
    ctx->pc = 0x1CFDE8u;
label_1cfde8:
    // 0x1cfde8: 0xc073e76  jal         func_1CF9D8
label_1cfdec:
    if (ctx->pc == 0x1CFDECu) {
        ctx->pc = 0x1CFDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDE8u;
        // 0x1cfdec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDF0u;
        goto label_1cfdf0;
    }
    ctx->pc = 0x1CFDE8u;
    SET_GPR_U32(ctx, 31, 0x1CFDF0u);
    ctx->pc = 0x1CFDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDE8u;
    // 0x1cfdec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF9D8u, 0x1CFDE8u, 0x1CFDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDF0u;
label_1cfdf0:
    // 0x1cfdf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfdf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cfdf4:
    // 0x1cfdf4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cfdf8:
    // 0x1cfdf8: 0x3e00008  jr          $ra
label_1cfdfc:
    if (ctx->pc == 0x1CFDFCu) {
        ctx->pc = 0x1CFDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDF8u;
        // 0x1cfdfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE00u;
        goto label_fallthrough_0x1cfdf8;
    }
    ctx->pc = 0x1CFDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDF8u;
        // 0x1cfdfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cfdf8:
    ctx->pc = 0x1CFE00u;
}
