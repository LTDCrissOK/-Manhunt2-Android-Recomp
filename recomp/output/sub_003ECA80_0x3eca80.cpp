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

// Function: sub_003ECA80
// Address: 0x3eca80 - 0x3ecbb0
void sub_003ECA80_0x3eca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ECA80_0x3eca80");
#endif

    switch (ctx->pc) {
        case 0x3ecab8u: goto label_3ecab8;
        case 0x3ecac4u: goto label_3ecac4;
        case 0x3ecaf8u: goto label_3ecaf8;
        case 0x3ecb6cu: goto label_3ecb6c;
        case 0x3ecb78u: goto label_3ecb78;
        default: break;
    }

    ctx->pc = 0x3eca80u;

    // 0x3eca80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3eca84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3eca88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3eca8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eca8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eca90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3eca94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3eca94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eca98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eca98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3eca9c: 0x2a430040  slti        $v1, $s2, 0x40
    ctx->pc = 0x3eca9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x3ecaa0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x3ecaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x3ecaa4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3ecaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ecaa8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3ECAA8u;
    {
        const bool branch_taken_0x3ecaa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ECAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAA8u;
        // 0x3ecaac: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecaa8) {
            ctx->pc = 0x3ECAE4u;
            goto label_3ecae4;
        }
    }
    ctx->pc = 0x3ECAB0u;
    // 0x3ecab0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3ECAB0u;
    SET_GPR_U32(ctx, 31, 0x3ECAB8u);
    ctx->pc = 0x3ECAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECAB0u;
    // 0x3ecab4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3ECAB0u, 0x3ECAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECAB8u;
label_3ecab8:
    // 0x3ecab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ecab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecabc: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3ECABCu;
    SET_GPR_U32(ctx, 31, 0x3ECAC4u);
    ctx->pc = 0x3ECAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECABCu;
    // 0x3ecac0: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3ECABCu, 0x3ECAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECAC4u;
label_3ecac4:
    // 0x3ecac4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3ecac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ecac8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ecac8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecacc: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3ecaccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3ecad0: 0xa6120004  sh          $s2, 0x4($s0)
    ctx->pc = 0x3ecad0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x3ecad4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x3ecad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x3ecad8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3ecad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3ecadc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3ECADCu;
    {
        const bool branch_taken_0x3ecadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECADCu;
        // 0x3ecae0: 0xa6120006  sh          $s2, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecadc) {
            ctx->pc = 0x3ECB98u;
            goto label_3ecb98;
        }
    }
    ctx->pc = 0x3ECAE4u;
label_3ecae4:
    // 0x3ecae4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3ecae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ecae8: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3ECAE8u;
    {
        const bool branch_taken_0x3ecae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAE8u;
        // 0x3ecaec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecae8) {
            ctx->pc = 0x3ECB64u;
            goto label_3ecb64;
        }
    }
    ctx->pc = 0x3ECAF0u;
    // 0x3ecaf0: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x3ecaf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3ecaf4: 0x0  nop
    ctx->pc = 0x3ecaf4u;
    // NOP
label_3ecaf8:
    // 0x3ecaf8: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3ecaf8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ecafc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3ecafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3ecb00: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3ecb00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ecb04: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3ECB04u;
    {
        const bool branch_taken_0x3ecb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ecb04) {
            ctx->pc = 0x3ECB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECB04u;
            // 0x3ecb08: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECB58u;
            goto label_3ecb58;
        }
    }
    ctx->pc = 0x3ECB0Cu;
    // 0x3ecb0c: 0x5465000a  bnel        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3ECB0Cu;
    {
        const bool branch_taken_0x3ecb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3ecb0c) {
            ctx->pc = 0x3ECB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECB0Cu;
            // 0x3ecb10: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECB38u;
            goto label_3ecb38;
        }
    }
    ctx->pc = 0x3ECB14u;
    // 0x3ecb14: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ECB14u;
    {
        const bool branch_taken_0x3ecb14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB14u;
        // 0x3ecb18: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecb14) {
            ctx->pc = 0x3ECB24u;
            goto label_3ecb24;
        }
    }
    ctx->pc = 0x3ECB1Cu;
    // 0x3ecb1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3ECB1Cu;
    {
        const bool branch_taken_0x3ecb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB1Cu;
        // 0x3ecb20: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecb1c) {
            ctx->pc = 0x3ECB28u;
            goto label_3ecb28;
        }
    }
    ctx->pc = 0x3ECB24u;
label_3ecb24:
    // 0x3ecb24: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3ecb24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3ecb28:
    // 0x3ecb28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ecb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ecb2c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ecb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ecb30: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3ecb30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3ecb34: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x3ecb34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3ecb38:
    // 0x3ecb38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ecb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ecb3c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3ecb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ecb40: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3ecb40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ecb44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ecb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ecb48: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3ecb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ecb4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ecb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ecb50: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3ECB50u;
    {
        const bool branch_taken_0x3ecb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB50u;
        // 0x3ecb54: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecb50) {
            ctx->pc = 0x3ECB98u;
            goto label_3ecb98;
        }
    }
    ctx->pc = 0x3ECB58u;
label_3ecb58:
    // 0x3ecb58: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3ecb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ecb5c: 0x5480ffe6  bnel        $a0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3ECB5Cu;
    {
        const bool branch_taken_0x3ecb5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ecb5c) {
            ctx->pc = 0x3ECB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECB5Cu;
            // 0x3ecb60: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ecaf8;
        }
    }
    ctx->pc = 0x3ECB64u;
label_3ecb64:
    // 0x3ecb64: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3ECB64u;
    SET_GPR_U32(ctx, 31, 0x3ECB6Cu);
    ctx->pc = 0x3ECB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECB64u;
    // 0x3ecb68: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3ECB64u, 0x3ECB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECB6Cu;
label_3ecb6c:
    // 0x3ecb6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ecb6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecb70: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3ECB70u;
    SET_GPR_U32(ctx, 31, 0x3ECB78u);
    ctx->pc = 0x3ECB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECB70u;
    // 0x3ecb74: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3ECB70u, 0x3ECB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECB78u;
label_3ecb78:
    // 0x3ecb78: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3ecb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ecb7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ecb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecb80: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3ecb80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x3ecb84: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3ecb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3ecb88: 0xa6120006  sh          $s2, 0x6($s0)
    ctx->pc = 0x3ecb88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x3ecb8c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x3ecb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ecb90: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x3ecb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x3ecb94: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3ecb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3ecb98:
    // 0x3ecb98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ecb98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ecb9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ecb9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ecba0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ecba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ecba4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ecba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ecba8: 0x3e00008  jr          $ra
    ctx->pc = 0x3ECBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECBA8u;
        // 0x3ecbac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ECBB0u;
}
