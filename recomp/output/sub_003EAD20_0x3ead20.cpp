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

// Function: sub_003EAD20
// Address: 0x3ead20 - 0x3eae58
void sub_003EAD20_0x3ead20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAD20_0x3ead20");
#endif

    switch (ctx->pc) {
        case 0x3ead20u: goto label_3ead20;
        case 0x3ead24u: goto label_3ead24;
        case 0x3ead28u: goto label_3ead28;
        case 0x3ead2cu: goto label_3ead2c;
        case 0x3ead30u: goto label_3ead30;
        case 0x3ead34u: goto label_3ead34;
        case 0x3ead38u: goto label_3ead38;
        case 0x3ead3cu: goto label_3ead3c;
        case 0x3ead40u: goto label_3ead40;
        case 0x3ead44u: goto label_3ead44;
        case 0x3ead48u: goto label_3ead48;
        case 0x3ead4cu: goto label_3ead4c;
        case 0x3ead50u: goto label_3ead50;
        case 0x3ead54u: goto label_3ead54;
        case 0x3ead58u: goto label_3ead58;
        case 0x3ead5cu: goto label_3ead5c;
        case 0x3ead60u: goto label_3ead60;
        case 0x3ead64u: goto label_3ead64;
        case 0x3ead68u: goto label_3ead68;
        case 0x3ead6cu: goto label_3ead6c;
        case 0x3ead70u: goto label_3ead70;
        case 0x3ead74u: goto label_3ead74;
        case 0x3ead78u: goto label_3ead78;
        case 0x3ead7cu: goto label_3ead7c;
        case 0x3ead80u: goto label_3ead80;
        case 0x3ead84u: goto label_3ead84;
        case 0x3ead88u: goto label_3ead88;
        case 0x3ead8cu: goto label_3ead8c;
        case 0x3ead90u: goto label_3ead90;
        case 0x3ead94u: goto label_3ead94;
        case 0x3ead98u: goto label_3ead98;
        case 0x3ead9cu: goto label_3ead9c;
        case 0x3eada0u: goto label_3eada0;
        case 0x3eada4u: goto label_3eada4;
        case 0x3eada8u: goto label_3eada8;
        case 0x3eadacu: goto label_3eadac;
        case 0x3eadb0u: goto label_3eadb0;
        case 0x3eadb4u: goto label_3eadb4;
        case 0x3eadb8u: goto label_3eadb8;
        case 0x3eadbcu: goto label_3eadbc;
        case 0x3eadc0u: goto label_3eadc0;
        case 0x3eadc4u: goto label_3eadc4;
        case 0x3eadc8u: goto label_3eadc8;
        case 0x3eadccu: goto label_3eadcc;
        case 0x3eadd0u: goto label_3eadd0;
        case 0x3eadd4u: goto label_3eadd4;
        case 0x3eadd8u: goto label_3eadd8;
        case 0x3eaddcu: goto label_3eaddc;
        case 0x3eade0u: goto label_3eade0;
        case 0x3eade4u: goto label_3eade4;
        case 0x3eade8u: goto label_3eade8;
        case 0x3eadecu: goto label_3eadec;
        case 0x3eadf0u: goto label_3eadf0;
        case 0x3eadf4u: goto label_3eadf4;
        case 0x3eadf8u: goto label_3eadf8;
        case 0x3eadfcu: goto label_3eadfc;
        case 0x3eae00u: goto label_3eae00;
        case 0x3eae04u: goto label_3eae04;
        case 0x3eae08u: goto label_3eae08;
        case 0x3eae0cu: goto label_3eae0c;
        case 0x3eae10u: goto label_3eae10;
        case 0x3eae14u: goto label_3eae14;
        case 0x3eae18u: goto label_3eae18;
        case 0x3eae1cu: goto label_3eae1c;
        case 0x3eae20u: goto label_3eae20;
        case 0x3eae24u: goto label_3eae24;
        case 0x3eae28u: goto label_3eae28;
        case 0x3eae2cu: goto label_3eae2c;
        case 0x3eae30u: goto label_3eae30;
        case 0x3eae34u: goto label_3eae34;
        case 0x3eae38u: goto label_3eae38;
        case 0x3eae3cu: goto label_3eae3c;
        case 0x3eae40u: goto label_3eae40;
        case 0x3eae44u: goto label_3eae44;
        case 0x3eae48u: goto label_3eae48;
        case 0x3eae4cu: goto label_3eae4c;
        case 0x3eae50u: goto label_3eae50;
        case 0x3eae54u: goto label_3eae54;
        default: break;
    }

    ctx->pc = 0x3ead20u;

label_3ead20:
    // 0x3ead20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ead20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ead24:
    // 0x3ead24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ead24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ead28:
    // 0x3ead28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ead28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ead2c:
    // 0x3ead2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ead2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ead30:
    // 0x3ead30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ead30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3ead34:
    // 0x3ead34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ead34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3ead38:
    // 0x3ead38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ead38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ead3c:
    // 0x3ead3c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3ead40:
    if (ctx->pc == 0x3EAD40u) {
        ctx->pc = 0x3EAD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD3Cu;
        // 0x3ead40: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD44u;
        goto label_3ead44;
    }
    ctx->pc = 0x3EAD3Cu;
    {
        const bool branch_taken_0x3ead3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD3Cu;
        // 0x3ead40: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ead3c) {
            ctx->pc = 0x3EADBCu;
            goto label_3eadbc;
        }
    }
    ctx->pc = 0x3EAD44u;
label_3ead44:
    // 0x3ead44: 0x0  nop
    ctx->pc = 0x3ead44u;
    // NOP
label_3ead48:
    // 0x3ead48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ead48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ead4c:
    // 0x3ead4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ead4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ead50:
    // 0x3ead50: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ead54:
    if (ctx->pc == 0x3EAD54u) {
        ctx->pc = 0x3EAD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD50u;
        // 0x3ead54: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD58u;
        goto label_3ead58;
    }
    ctx->pc = 0x3EAD50u;
    {
        const bool branch_taken_0x3ead50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ead50) {
            ctx->pc = 0x3EAD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAD50u;
            // 0x3ead54: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EADACu;
            goto label_3eadac;
        }
    }
    ctx->pc = 0x3EAD58u;
label_3ead58:
    // 0x3ead58: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ead58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ead5c:
    // 0x3ead5c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ead5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ead60:
    // 0x3ead60: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ead60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ead64:
    // 0x3ead64: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ead68:
    if (ctx->pc == 0x3EAD68u) {
        ctx->pc = 0x3EAD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD64u;
        // 0x3ead68: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD6Cu;
        goto label_3ead6c;
    }
    ctx->pc = 0x3EAD64u;
    {
        const bool branch_taken_0x3ead64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ead64) {
            ctx->pc = 0x3EAD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAD64u;
            // 0x3ead68: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAD98u;
            goto label_3ead98;
        }
    }
    ctx->pc = 0x3EAD6Cu;
label_3ead6c:
    // 0x3ead6c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ead6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ead70:
    // 0x3ead70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ead70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ead74:
    // 0x3ead74: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ead74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ead78:
    // 0x3ead78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ead78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ead7c:
    // 0x3ead7c: 0x40f809  jalr        $v0
label_3ead80:
    if (ctx->pc == 0x3EAD80u) {
        ctx->pc = 0x3EAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD7Cu;
        // 0x3ead80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD84u;
        goto label_3ead84;
    }
    ctx->pc = 0x3EAD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAD84u);
        ctx->pc = 0x3EAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD7Cu;
        // 0x3ead80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAD7Cu, 0x3EAD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAD84u;
label_3ead84:
    // 0x3ead84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ead84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ead88:
    // 0x3ead88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ead88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ead8c:
    // 0x3ead8c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ead90:
    if (ctx->pc == 0x3EAD90u) {
        ctx->pc = 0x3EAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD8Cu;
        // 0x3ead90: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD94u;
        goto label_3ead94;
    }
    ctx->pc = 0x3EAD8Cu;
    {
        const bool branch_taken_0x3ead8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD8Cu;
        // 0x3ead90: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ead8c) {
            ctx->pc = 0x3EAD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ead70;
        }
    }
    ctx->pc = 0x3EAD94u;
label_3ead94:
    // 0x3ead94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ead94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ead98:
    // 0x3ead98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ead98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ead9c:
    // 0x3ead9c: 0xc0f528a  jal         func_3D4A28
label_3eada0:
    if (ctx->pc == 0x3EADA0u) {
        ctx->pc = 0x3EADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD9Cu;
        // 0x3eada0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EADA4u;
        goto label_3eada4;
    }
    ctx->pc = 0x3EAD9Cu;
    SET_GPR_U32(ctx, 31, 0x3EADA4u);
    ctx->pc = 0x3EADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAD9Cu;
    // 0x3eada0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EAD9Cu, 0x3EADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EADA4u;
label_3eada4:
    // 0x3eada4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eada4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eada8:
    // 0x3eada8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eada8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eadac:
    // 0x3eadac: 0xc0f5222  jal         func_3D4888
label_3eadb0:
    if (ctx->pc == 0x3EADB0u) {
        ctx->pc = 0x3EADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADACu;
        // 0x3eadb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EADB4u;
        goto label_3eadb4;
    }
    ctx->pc = 0x3EADACu;
    SET_GPR_U32(ctx, 31, 0x3EADB4u);
    ctx->pc = 0x3EADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EADACu;
    // 0x3eadb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EADACu, 0x3EADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EADB4u;
label_3eadb4:
    // 0x3eadb4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eadb8:
    if (ctx->pc == 0x3EADB8u) {
        ctx->pc = 0x3EADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADB4u;
        // 0x3eadb8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EADBCu;
        goto label_3eadbc;
    }
    ctx->pc = 0x3EADB4u;
    {
        const bool branch_taken_0x3eadb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADB4u;
        // 0x3eadb8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eadb4) {
            ctx->pc = 0x3EAD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ead48;
        }
    }
    ctx->pc = 0x3EADBCu;
label_3eadbc:
    // 0x3eadbc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eadc0:
    // 0x3eadc0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3eadc4:
    if (ctx->pc == 0x3EADC4u) {
        ctx->pc = 0x3EADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADC0u;
        // 0x3eadc4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EADC8u;
        goto label_3eadc8;
    }
    ctx->pc = 0x3EADC0u;
    {
        const bool branch_taken_0x3eadc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADC0u;
        // 0x3eadc4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eadc0) {
            ctx->pc = 0x3EAE3Cu;
            goto label_3eae3c;
        }
    }
    ctx->pc = 0x3EADC8u;
label_3eadc8:
    // 0x3eadc8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eadc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eadcc:
    // 0x3eadcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eadccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eadd0:
    // 0x3eadd0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eadd4:
    if (ctx->pc == 0x3EADD4u) {
        ctx->pc = 0x3EADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADD0u;
        // 0x3eadd4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EADD8u;
        goto label_3eadd8;
    }
    ctx->pc = 0x3EADD0u;
    {
        const bool branch_taken_0x3eadd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eadd0) {
            ctx->pc = 0x3EADD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EADD0u;
            // 0x3eadd4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAE2Cu;
            goto label_3eae2c;
        }
    }
    ctx->pc = 0x3EADD8u;
label_3eadd8:
    // 0x3eadd8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eadd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eaddc:
    // 0x3eaddc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eaddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eade0:
    // 0x3eade0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eade0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eade4:
    // 0x3eade4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eade8:
    if (ctx->pc == 0x3EADE8u) {
        ctx->pc = 0x3EADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADE4u;
        // 0x3eade8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EADECu;
        goto label_3eadec;
    }
    ctx->pc = 0x3EADE4u;
    {
        const bool branch_taken_0x3eade4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eade4) {
            ctx->pc = 0x3EADE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EADE4u;
            // 0x3eade8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAE18u;
            goto label_3eae18;
        }
    }
    ctx->pc = 0x3EADECu;
label_3eadec:
    // 0x3eadec: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eadecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eadf0:
    // 0x3eadf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eadf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eadf4:
    // 0x3eadf4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eadf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eadf8:
    // 0x3eadf8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eadf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eadfc:
    // 0x3eadfc: 0x40f809  jalr        $v0
label_3eae00:
    if (ctx->pc == 0x3EAE00u) {
        ctx->pc = 0x3EAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADFCu;
        // 0x3eae00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAE04u;
        goto label_3eae04;
    }
    ctx->pc = 0x3EADFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAE04u);
        ctx->pc = 0x3EAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADFCu;
        // 0x3eae00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EADFCu, 0x3EAE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAE04u;
label_3eae04:
    // 0x3eae04: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eae04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eae08:
    // 0x3eae08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eae0c:
    // 0x3eae0c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eae10:
    if (ctx->pc == 0x3EAE10u) {
        ctx->pc = 0x3EAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE0Cu;
        // 0x3eae10: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAE14u;
        goto label_3eae14;
    }
    ctx->pc = 0x3EAE0Cu;
    {
        const bool branch_taken_0x3eae0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE0Cu;
        // 0x3eae10: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eae0c) {
            ctx->pc = 0x3EADF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eadf0;
        }
    }
    ctx->pc = 0x3EAE14u;
label_3eae14:
    // 0x3eae14: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eae18:
    // 0x3eae18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eae18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eae1c:
    // 0x3eae1c: 0xc0f528a  jal         func_3D4A28
label_3eae20:
    if (ctx->pc == 0x3EAE20u) {
        ctx->pc = 0x3EAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE1Cu;
        // 0x3eae20: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAE24u;
        goto label_3eae24;
    }
    ctx->pc = 0x3EAE1Cu;
    SET_GPR_U32(ctx, 31, 0x3EAE24u);
    ctx->pc = 0x3EAE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAE1Cu;
    // 0x3eae20: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EAE1Cu, 0x3EAE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAE24u;
label_3eae24:
    // 0x3eae24: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eae28:
    // 0x3eae28: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eae28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eae2c:
    // 0x3eae2c: 0xc0f5222  jal         func_3D4888
label_3eae30:
    if (ctx->pc == 0x3EAE30u) {
        ctx->pc = 0x3EAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE2Cu;
        // 0x3eae30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAE34u;
        goto label_3eae34;
    }
    ctx->pc = 0x3EAE2Cu;
    SET_GPR_U32(ctx, 31, 0x3EAE34u);
    ctx->pc = 0x3EAE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAE2Cu;
    // 0x3eae30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EAE2Cu, 0x3EAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAE34u;
label_3eae34:
    // 0x3eae34: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eae38:
    if (ctx->pc == 0x3EAE38u) {
        ctx->pc = 0x3EAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE34u;
        // 0x3eae38: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAE3Cu;
        goto label_3eae3c;
    }
    ctx->pc = 0x3EAE34u;
    {
        const bool branch_taken_0x3eae34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE34u;
        // 0x3eae38: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eae34) {
            ctx->pc = 0x3EADC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eadc8;
        }
    }
    ctx->pc = 0x3EAE3Cu;
label_3eae3c:
    // 0x3eae3c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3eae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3eae40:
    // 0x3eae40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eae40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eae44:
    // 0x3eae44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eae44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eae48:
    // 0x3eae48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eae48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eae4c:
    // 0x3eae4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eae4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eae50:
    // 0x3eae50: 0x3e00008  jr          $ra
label_3eae54:
    if (ctx->pc == 0x3EAE54u) {
        ctx->pc = 0x3EAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE50u;
        // 0x3eae54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAE58u;
        goto label_fallthrough_0x3eae50;
    }
    ctx->pc = 0x3EAE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE50u;
        // 0x3eae54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eae50:
    ctx->pc = 0x3EAE58u;
}
