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

// Function: sub_003729F0
// Address: 0x3729f0 - 0x372b80
void sub_003729F0_0x3729f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003729F0_0x3729f0");
#endif

    switch (ctx->pc) {
        case 0x372ad0u: goto label_372ad0;
        case 0x372af0u: goto label_372af0;
        case 0x372b14u: goto label_372b14;
        case 0x372b1cu: goto label_372b1c;
        case 0x372b50u: goto label_372b50;
        default: break;
    }

    ctx->pc = 0x3729f0u;

    // 0x3729f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3729f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3729f4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x3729f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x3729f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3729f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3729fc: 0x3c0c0040  lui         $t4, 0x40
    ctx->pc = 0x3729fcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)64 << 16));
    // 0x372a00: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x372a00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x372a04: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x372a04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x372a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x372a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x372a0c: 0x89c03  sra         $s3, $t0, 16
    ctx->pc = 0x372a0cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 8), 16));
    // 0x372a10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x372a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x372a14: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x372a14u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x372a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372a1c: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x372a1cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x372a20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x372a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x372a24: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x372a24u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x372a28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x372a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x372a2c: 0x68c03  sra         $s1, $a2, 16
    ctx->pc = 0x372a2cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 16));
    // 0x372a30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x372a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x372a34: 0x79403  sra         $s2, $a3, 16
    ctx->pc = 0x372a34u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 16));
    // 0x372a38: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x372a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x372a3c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x372a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x372a40: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x372a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372a44: 0x8d83ccd0  lw          $v1, -0x3330($t4)
    ctx->pc = 0x372a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294954192)));
    // 0x372a48: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x372a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x372a4c: 0x180b82d  daddu       $s7, $t4, $zero
    ctx->pc = 0x372a4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a50: 0x9a403  sra         $s4, $t1, 16
    ctx->pc = 0x372a50u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 9), 16));
    // 0x372a54: 0xaac03  sra         $s5, $t2, 16
    ctx->pc = 0x372a54u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 10), 16));
    // 0x372a58: 0xbb403  sra         $s6, $t3, 16
    ctx->pc = 0x372a58u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 11), 16));
    // 0x372a5c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x372a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a60: 0xac485ac0  sw          $t0, 0x5AC0($v0)
    ctx->pc = 0x372a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23232), GPR_U32(ctx, 8));
    // 0x372a64: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x372a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x372a68: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x372A68u;
    {
        const bool branch_taken_0x372a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A68u;
        // 0x372a6c: 0x87b00090  lh          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a68) {
            ctx->pc = 0x372AACu;
            goto label_372aac;
        }
    }
    ctx->pc = 0x372A70u;
    // 0x372a70: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x372a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x372a74: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x372a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x372a78: 0x24425a40  addiu       $v0, $v0, 0x5A40
    ctx->pc = 0x372a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23104));
    // 0x372a7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x372a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x372a80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x372a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x372a84: 0xacc2ccc0  sw          $v0, -0x3340($a2)
    ctx->pc = 0x372a84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954176), GPR_U32(ctx, 2));
    // 0x372a88: 0xac440068  sw          $a0, 0x68($v0)
    ctx->pc = 0x372a88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x20655AA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x20655AA8u, _value); } while (0);
    // 0x372a8c: 0x8cc3ccc0  lw          $v1, -0x3340($a2)
    ctx->pc = 0x372a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
    // 0x372a90: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x372a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x372a94: 0x8cc2ccc0  lw          $v0, -0x3340($a2)
    ctx->pc = 0x372a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
    // 0x372a98: 0xa4400054  sh          $zero, 0x54($v0)
    ctx->pc = 0x372a98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x372a9c: 0x8cc3ccc0  lw          $v1, -0x3340($a2)
    ctx->pc = 0x372a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
    // 0x372aa0: 0xa4600056  sh          $zero, 0x56($v1)
    ctx->pc = 0x372aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x372aa4: 0x8cc2ccc0  lw          $v0, -0x3340($a2)
    ctx->pc = 0x372aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
    // 0x372aa8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x372aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_372aac:
    // 0x372aac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x372aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372ab0: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x372AB0u;
    {
        const bool branch_taken_0x372ab0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x372AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372AB0u;
        // 0x372ab4: 0x8cc2ccc0  lw          $v0, -0x3340($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372ab0) {
            ctx->pc = 0x372AC0u;
            goto label_372ac0;
        }
    }
    ctx->pc = 0x372AB8u;
    // 0x372ab8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x372AB8u;
    {
        const bool branch_taken_0x372ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372AB8u;
        // 0x372abc: 0xac48007c  sw          $t0, 0x7C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372ab8) {
            ctx->pc = 0x372AC4u;
            goto label_372ac4;
        }
    }
    ctx->pc = 0x372AC0u;
label_372ac0:
    // 0x372ac0: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x372ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
label_372ac4:
    // 0x372ac4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x372ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ac8: 0xc0dc98a  jal         func_372628
    ctx->pc = 0x372AC8u;
    SET_GPR_U32(ctx, 31, 0x372AD0u);
    ctx->pc = 0x372ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372AC8u;
    // 0x372acc: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372628u, 0x372AC8u, 0x372AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372AD0u;
label_372ad0:
    // 0x372ad0: 0x8ee2ccd0  lw          $v0, -0x3330($s7)
    ctx->pc = 0x372ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954192)));
    // 0x372ad4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x372AD4u;
    {
        const bool branch_taken_0x372ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372ad4) {
            ctx->pc = 0x372AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372AD4u;
            // 0x372ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372B34u;
            goto label_372b34;
        }
    }
    ctx->pc = 0x372ADCu;
    // 0x372adc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x372adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x372ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x372ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ae4: 0x2444cc48  addiu       $a0, $v0, -0x33B8
    ctx->pc = 0x372ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954056));
    // 0x372ae8: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x372ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x372aec: 0x0  nop
    ctx->pc = 0x372aecu;
    // NOP
label_372af0:
    // 0x372af0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x372af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x372af4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x372af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x372af8: 0x2ca3001e  sltiu       $v1, $a1, 0x1E
    ctx->pc = 0x372af8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x372afc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x372afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x372b00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x372b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x372b04: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x372B04u;
    {
        const bool branch_taken_0x372b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B04u;
        // 0x372b08: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372b04) {
            ctx->pc = 0x372AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372af0;
        }
    }
    ctx->pc = 0x372B0Cu;
    // 0x372b0c: 0xc0e0f3e  jal         func_383CF8
    ctx->pc = 0x372B0Cu;
    SET_GPR_U32(ctx, 31, 0x372B14u);
    ctx->pc = 0x383CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383CF8u, 0x372B0Cu, 0x372B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B14u;
label_372b14:
    // 0x372b14: 0xc0dcae0  jal         func_372B80
    ctx->pc = 0x372B14u;
    SET_GPR_U32(ctx, 31, 0x372B1Cu);
    ctx->pc = 0x372B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372B80u, 0x372B14u, 0x372B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B1Cu;
label_372b1c:
    // 0x372b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x372b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372b20: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x372b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x372b24: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x372b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x372b28: 0xaee2ccd0  sw          $v0, -0x3330($s7)
    ctx->pc = 0x372b28u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294954192), GPR_U32(ctx, 2));
    // 0x372b2c: 0xfc642d38  sd          $a0, 0x2D38($v1)
    ctx->pc = 0x372b2cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x482D38u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x482D38u, _value); } while (0);
    // 0x372b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x372b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_372b34:
    // 0x372b34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x372b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b38: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x372b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b3c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x372b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b40: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x372b40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b44: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x372b44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b48: 0xc0dc9cc  jal         func_372730
    ctx->pc = 0x372B48u;
    SET_GPR_U32(ctx, 31, 0x372B50u);
    ctx->pc = 0x372B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B48u;
    // 0x372b4c: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372730u, 0x372B48u, 0x372B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B50u;
label_372b50:
    // 0x372b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372b54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x372b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372b58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x372b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372b5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x372b5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x372b60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x372b60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x372b64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x372b64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x372b68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x372b68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x372b6c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x372b6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x372b70: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x372b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x372b74: 0x3e00008  jr          $ra
    ctx->pc = 0x372B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B74u;
        // 0x372b78: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372B7Cu;
    // 0x372b7c: 0x0  nop
    ctx->pc = 0x372b7cu;
    // NOP
    ctx->pc = 0x372b80u;
}
