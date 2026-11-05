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

// Function: sub_00279BB0
// Address: 0x279bb0 - 0x27a0d0
void sub_00279BB0_0x279bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279BB0_0x279bb0");
#endif

    switch (ctx->pc) {
        case 0x279bfcu: goto label_279bfc;
        case 0x279c28u: goto label_279c28;
        case 0x279c6cu: goto label_279c6c;
        case 0x279c98u: goto label_279c98;
        case 0x279ce8u: goto label_279ce8;
        case 0x279d14u: goto label_279d14;
        case 0x279d20u: goto label_279d20;
        case 0x279d58u: goto label_279d58;
        case 0x279d80u: goto label_279d80;
        case 0x279d84u: goto label_279d84;
        case 0x279dd0u: goto label_279dd0;
        case 0x279e00u: goto label_279e00;
        case 0x279e28u: goto label_279e28;
        case 0x279e2cu: goto label_279e2c;
        case 0x279e78u: goto label_279e78;
        case 0x279ea8u: goto label_279ea8;
        case 0x279ed0u: goto label_279ed0;
        case 0x279ed4u: goto label_279ed4;
        case 0x279f20u: goto label_279f20;
        case 0x279f50u: goto label_279f50;
        case 0x279f78u: goto label_279f78;
        case 0x279f7cu: goto label_279f7c;
        case 0x279fc8u: goto label_279fc8;
        case 0x279ff8u: goto label_279ff8;
        case 0x27a020u: goto label_27a020;
        case 0x27a024u: goto label_27a024;
        case 0x27a070u: goto label_27a070;
        case 0x27a09cu: goto label_27a09c;
        default: break;
    }

    ctx->pc = 0x279bb0u;

    // 0x279bb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x279bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x279bb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x279bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x279bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279bbc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x279bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x279bc0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x279bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x279bc4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x279bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x279bc8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x279bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279bcc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x279bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x279bd0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x279bd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279bd4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x279bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x279bd8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x279bd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279bdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x279bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x279be0: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x279be0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279be4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x279be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x279be8: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x279be8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279bec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x279becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x279bf0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x279bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x279bf4: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x279BF4u;
    SET_GPR_U32(ctx, 31, 0x279BFCu);
    ctx->pc = 0x279BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279BF4u;
    // 0x279bf8: 0xafab0000  sw          $t3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x279BF4u, 0x279BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BFCu;
label_279bfc:
    // 0x279bfc: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279c00: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x279c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x279c04: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279c08: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x279c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x279c0c: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279c0cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279c10: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x279C10u;
    {
        const bool branch_taken_0x279c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279c10) {
            ctx->pc = 0x279C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279C10u;
            // 0x279c14: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279C28u;
            goto label_279c28;
        }
    }
    ctx->pc = 0x279C18u;
    // 0x279c18: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279c1c: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x279C1Cu;
    {
        const bool branch_taken_0x279c1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x279C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C1Cu;
        // 0x279c20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c1c) {
            ctx->pc = 0x279C58u;
            goto label_279c58;
        }
    }
    ctx->pc = 0x279C24u;
    // 0x279c24: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279c28:
    // 0x279c28: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x279c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x279c2c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x279c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c30: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x279c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279c34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279c38: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x279c3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x279c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279c40: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x279c40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279c44: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x279C44u;
    {
        const bool branch_taken_0x279c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x279c44) {
            ctx->pc = 0x279C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279C44u;
            // 0x279c48: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279c28;
        }
    }
    ctx->pc = 0x279C4Cu;
    // 0x279c4c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279c50: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x279C50u;
    {
        const bool branch_taken_0x279c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x279c50) {
            ctx->pc = 0x279C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279C50u;
            // 0x279c54: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279c28;
        }
    }
    ctx->pc = 0x279C58u;
label_279c58:
    // 0x279c58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x279c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c60: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x279c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x279c64: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279C64u;
    SET_GPR_U32(ctx, 31, 0x279C6Cu);
    ctx->pc = 0x279C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279C64u;
    // 0x279c68: 0x26720004  addiu       $s2, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279C64u, 0x279C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C6Cu;
label_279c6c:
    // 0x279c6c: 0x26b60004  addiu       $s6, $s5, 0x4
    ctx->pc = 0x279c6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x279c70: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x279c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x279c74: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279c78: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x279c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279c7c: 0x26fe0004  addiu       $fp, $s7, 0x4
    ctx->pc = 0x279c7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x279c80: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x279c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x279c84: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x279c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x279c88: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x279c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x279c8c: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279c90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279C90u;
    {
        const bool branch_taken_0x279c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C90u;
        // 0x279c94: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c90) {
            ctx->pc = 0x279CA4u;
            goto label_279ca4;
        }
    }
    ctx->pc = 0x279C98u;
label_279c98:
    // 0x279c98: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279c9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279ca0: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_279ca4:
    // 0x279ca4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x279ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279ca8: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279ca8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279cac: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279CACu;
    {
        const bool branch_taken_0x279cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279cac) {
            ctx->pc = 0x279CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279CACu;
            // 0x279cb0: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279c98;
        }
    }
    ctx->pc = 0x279CB4u;
    // 0x279cb4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279cb8: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279CB8u;
    {
        const bool branch_taken_0x279cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279cb8) {
            ctx->pc = 0x279CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279CB8u;
            // 0x279cbc: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279c98;
        }
    }
    ctx->pc = 0x279CC0u;
    // 0x279cc0: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x279cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279cc4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279cc8: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x279cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x279ccc: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x279cccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279cd0: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x279CD0u;
    {
        const bool branch_taken_0x279cd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x279CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CD0u;
        // 0x279cd4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cd0) {
            ctx->pc = 0x279D08u;
            goto label_279d08;
        }
    }
    ctx->pc = 0x279CD8u;
    // 0x279cd8: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x279CD8u;
    {
        const bool branch_taken_0x279cd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x279CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CD8u;
        // 0x279cdc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cd8) {
            ctx->pc = 0x279D08u;
            goto label_279d08;
        }
    }
    ctx->pc = 0x279CE0u;
    // 0x279ce0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x279ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279ce4: 0x0  nop
    ctx->pc = 0x279ce4u;
    // NOP
label_279ce8:
    // 0x279ce8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x279ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x279cec: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x279cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x279cf0: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x279cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279cf4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x279cf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279cf8: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x279CF8u;
    {
        const bool branch_taken_0x279cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x279CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CF8u;
        // 0x279cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cf8) {
            ctx->pc = 0x279D0Cu;
            goto label_279d0c;
        }
    }
    ctx->pc = 0x279D00u;
    // 0x279d00: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x279D00u;
    {
        const bool branch_taken_0x279d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x279D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D00u;
        // 0x279d04: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d00) {
            ctx->pc = 0x279CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279ce8;
        }
    }
    ctx->pc = 0x279D08u;
label_279d08:
    // 0x279d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279d0c:
    // 0x279d0c: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x279D0Cu;
    SET_GPR_U32(ctx, 31, 0x279D14u);
    ctx->pc = 0x279D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279D0Cu;
    // 0x279d10: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x279D0Cu, 0x279D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D14u;
label_279d14:
    // 0x279d14: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279d18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279D18u;
    {
        const bool branch_taken_0x279d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D18u;
        // 0x279d1c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d18) {
            ctx->pc = 0x279D2Cu;
            goto label_279d2c;
        }
    }
    ctx->pc = 0x279D20u;
label_279d20:
    // 0x279d20: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279d24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279d28: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_279d2c:
    // 0x279d2c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x279d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279d30: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279d30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279d34: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279D34u;
    {
        const bool branch_taken_0x279d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279d34) {
            ctx->pc = 0x279D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279D34u;
            // 0x279d38: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279d20;
        }
    }
    ctx->pc = 0x279D3Cu;
    // 0x279d3c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279d40: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279D40u;
    {
        const bool branch_taken_0x279d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279d40) {
            ctx->pc = 0x279D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279D40u;
            // 0x279d44: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279d20;
        }
    }
    ctx->pc = 0x279D48u;
    // 0x279d48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x279d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x279d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d50: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279D50u;
    SET_GPR_U32(ctx, 31, 0x279D58u);
    ctx->pc = 0x279D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279D50u;
    // 0x279d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279D50u, 0x279D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D58u;
label_279d58:
    // 0x279d58: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x279d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279d5c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x279d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279d60: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x279d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279d64: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x279d64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279d68: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279D68u;
    {
        const bool branch_taken_0x279d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x279d68) {
            ctx->pc = 0x279D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279D68u;
            // 0x279d6c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279D80u;
            goto label_279d80;
        }
    }
    ctx->pc = 0x279D70u;
    // 0x279d70: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279d74: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x279D74u;
    {
        const bool branch_taken_0x279d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x279d74) {
            ctx->pc = 0x279D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279D74u;
            // 0x279d78: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279DACu;
            goto label_279dac;
        }
    }
    ctx->pc = 0x279D7Cu;
    // 0x279d7c: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279d80:
    // 0x279d80: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_279d84:
    // 0x279d84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279d88: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x279d8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x279d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279d90: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279d90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279d94: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x279D94u;
    {
        const bool branch_taken_0x279d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279d94) {
            ctx->pc = 0x279D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279D94u;
            // 0x279d98: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279D84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279d84;
        }
    }
    ctx->pc = 0x279D9Cu;
    // 0x279d9c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279da0: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279DA0u;
    {
        const bool branch_taken_0x279da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279da0) {
            ctx->pc = 0x279DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279DA0u;
            // 0x279da4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279d80;
        }
    }
    ctx->pc = 0x279DA8u;
    // 0x279da8: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x279da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279dac:
    // 0x279dac: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279db0: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x279db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x279db4: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x279db4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279db8: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x279DB8u;
    {
        const bool branch_taken_0x279db8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x279DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DB8u;
        // 0x279dbc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279db8) {
            ctx->pc = 0x279DF0u;
            goto label_279df0;
        }
    }
    ctx->pc = 0x279DC0u;
    // 0x279dc0: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x279DC0u;
    {
        const bool branch_taken_0x279dc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x279DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DC0u;
        // 0x279dc4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279dc0) {
            ctx->pc = 0x279DF0u;
            goto label_279df0;
        }
    }
    ctx->pc = 0x279DC8u;
    // 0x279dc8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x279dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279dcc: 0x0  nop
    ctx->pc = 0x279dccu;
    // NOP
label_279dd0:
    // 0x279dd0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x279dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x279dd4: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x279dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x279dd8: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x279dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279ddc: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x279ddcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279de0: 0x50460004  beql        $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x279DE0u;
    {
        const bool branch_taken_0x279de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x279de0) {
            ctx->pc = 0x279DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279DE0u;
            // 0x279de4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279DF4u;
            goto label_279df4;
        }
    }
    ctx->pc = 0x279DE8u;
    // 0x279de8: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x279DE8u;
    {
        const bool branch_taken_0x279de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x279DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DE8u;
        // 0x279dec: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279de8) {
            ctx->pc = 0x279DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279dd0;
        }
    }
    ctx->pc = 0x279DF0u;
label_279df0:
    // 0x279df0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x279df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_279df4:
    // 0x279df4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x279df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279df8: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279DF8u;
    SET_GPR_U32(ctx, 31, 0x279E00u);
    ctx->pc = 0x279DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279DF8u;
    // 0x279dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279DF8u, 0x279E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279E00u;
label_279e00:
    // 0x279e00: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x279e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279e04: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x279e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279e08: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x279e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279e0c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x279e0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279e10: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279E10u;
    {
        const bool branch_taken_0x279e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x279e10) {
            ctx->pc = 0x279E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279E10u;
            // 0x279e14: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279E28u;
            goto label_279e28;
        }
    }
    ctx->pc = 0x279E18u;
    // 0x279e18: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279e1c: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x279E1Cu;
    {
        const bool branch_taken_0x279e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x279e1c) {
            ctx->pc = 0x279E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279E1Cu;
            // 0x279e20: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279E54u;
            goto label_279e54;
        }
    }
    ctx->pc = 0x279E24u;
    // 0x279e24: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279e28:
    // 0x279e28: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_279e2c:
    // 0x279e2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279e30: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x279e34: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x279e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279e38: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279e38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279e3c: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x279E3Cu;
    {
        const bool branch_taken_0x279e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279e3c) {
            ctx->pc = 0x279E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279E3Cu;
            // 0x279e40: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279E2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279e2c;
        }
    }
    ctx->pc = 0x279E44u;
    // 0x279e44: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279e48: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279E48u;
    {
        const bool branch_taken_0x279e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279e48) {
            ctx->pc = 0x279E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279E48u;
            // 0x279e4c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279e28;
        }
    }
    ctx->pc = 0x279E50u;
    // 0x279e50: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x279e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279e54:
    // 0x279e54: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279e58: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x279e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x279e5c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x279e5cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279e60: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x279E60u;
    {
        const bool branch_taken_0x279e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x279E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E60u;
        // 0x279e64: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e60) {
            ctx->pc = 0x279E98u;
            goto label_279e98;
        }
    }
    ctx->pc = 0x279E68u;
    // 0x279e68: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x279E68u;
    {
        const bool branch_taken_0x279e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x279E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E68u;
        // 0x279e6c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e68) {
            ctx->pc = 0x279E98u;
            goto label_279e98;
        }
    }
    ctx->pc = 0x279E70u;
    // 0x279e70: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x279e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279e74: 0x0  nop
    ctx->pc = 0x279e74u;
    // NOP
label_279e78:
    // 0x279e78: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x279e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x279e7c: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x279e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x279e80: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x279e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279e84: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x279e84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279e88: 0x50460004  beql        $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x279E88u;
    {
        const bool branch_taken_0x279e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x279e88) {
            ctx->pc = 0x279E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279E88u;
            // 0x279e8c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279E9Cu;
            goto label_279e9c;
        }
    }
    ctx->pc = 0x279E90u;
    // 0x279e90: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x279E90u;
    {
        const bool branch_taken_0x279e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x279E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E90u;
        // 0x279e94: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e90) {
            ctx->pc = 0x279E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279e78;
        }
    }
    ctx->pc = 0x279E98u;
label_279e98:
    // 0x279e98: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x279e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_279e9c:
    // 0x279e9c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x279e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ea0: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279EA0u;
    SET_GPR_U32(ctx, 31, 0x279EA8u);
    ctx->pc = 0x279EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279EA0u;
    // 0x279ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279EA0u, 0x279EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279EA8u;
label_279ea8:
    // 0x279ea8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x279ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279eac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x279eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279eb0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x279eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279eb4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x279eb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279eb8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279EB8u;
    {
        const bool branch_taken_0x279eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x279eb8) {
            ctx->pc = 0x279EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279EB8u;
            // 0x279ebc: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279ED0u;
            goto label_279ed0;
        }
    }
    ctx->pc = 0x279EC0u;
    // 0x279ec0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279ec4: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x279EC4u;
    {
        const bool branch_taken_0x279ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x279ec4) {
            ctx->pc = 0x279EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279EC4u;
            // 0x279ec8: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279EFCu;
            goto label_279efc;
        }
    }
    ctx->pc = 0x279ECCu;
    // 0x279ecc: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279ed0:
    // 0x279ed0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_279ed4:
    // 0x279ed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279ed8: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x279edc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x279edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279ee0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279ee0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279ee4: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x279EE4u;
    {
        const bool branch_taken_0x279ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279ee4) {
            ctx->pc = 0x279EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279EE4u;
            // 0x279ee8: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279ed4;
        }
    }
    ctx->pc = 0x279EECu;
    // 0x279eec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279ef0: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279EF0u;
    {
        const bool branch_taken_0x279ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279ef0) {
            ctx->pc = 0x279EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279EF0u;
            // 0x279ef4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279ed0;
        }
    }
    ctx->pc = 0x279EF8u;
    // 0x279ef8: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x279ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279efc:
    // 0x279efc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279f00: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x279f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x279f04: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x279f04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279f08: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x279F08u;
    {
        const bool branch_taken_0x279f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x279F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F08u;
        // 0x279f0c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f08) {
            ctx->pc = 0x279F40u;
            goto label_279f40;
        }
    }
    ctx->pc = 0x279F10u;
    // 0x279f10: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x279F10u;
    {
        const bool branch_taken_0x279f10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x279F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F10u;
        // 0x279f14: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f10) {
            ctx->pc = 0x279F40u;
            goto label_279f40;
        }
    }
    ctx->pc = 0x279F18u;
    // 0x279f18: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x279f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279f1c: 0x0  nop
    ctx->pc = 0x279f1cu;
    // NOP
label_279f20:
    // 0x279f20: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x279f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x279f24: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x279f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x279f28: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x279f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279f2c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x279f2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279f30: 0x50460004  beql        $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x279F30u;
    {
        const bool branch_taken_0x279f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x279f30) {
            ctx->pc = 0x279F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279F30u;
            // 0x279f34: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279F44u;
            goto label_279f44;
        }
    }
    ctx->pc = 0x279F38u;
    // 0x279f38: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x279F38u;
    {
        const bool branch_taken_0x279f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x279F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F38u;
        // 0x279f3c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f38) {
            ctx->pc = 0x279F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279f20;
        }
    }
    ctx->pc = 0x279F40u;
label_279f40:
    // 0x279f40: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x279f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_279f44:
    // 0x279f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f48: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279F48u;
    SET_GPR_U32(ctx, 31, 0x279F50u);
    ctx->pc = 0x279F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279F48u;
    // 0x279f4c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279F48u, 0x279F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279F50u;
label_279f50:
    // 0x279f50: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x279f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279f54: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x279f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279f58: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x279f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279f5c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x279f5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279f60: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279F60u;
    {
        const bool branch_taken_0x279f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x279f60) {
            ctx->pc = 0x279F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279F60u;
            // 0x279f64: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279F78u;
            goto label_279f78;
        }
    }
    ctx->pc = 0x279F68u;
    // 0x279f68: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279f6c: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x279F6Cu;
    {
        const bool branch_taken_0x279f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x279f6c) {
            ctx->pc = 0x279F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279F6Cu;
            // 0x279f70: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279FA4u;
            goto label_279fa4;
        }
    }
    ctx->pc = 0x279F74u;
    // 0x279f74: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279f78:
    // 0x279f78: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_279f7c:
    // 0x279f7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279f80: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x279f84: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x279f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279f88: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279f88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279f8c: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x279F8Cu;
    {
        const bool branch_taken_0x279f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279f8c) {
            ctx->pc = 0x279F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279F8Cu;
            // 0x279f90: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279F7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279f7c;
        }
    }
    ctx->pc = 0x279F94u;
    // 0x279f94: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279f98: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279F98u;
    {
        const bool branch_taken_0x279f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279f98) {
            ctx->pc = 0x279F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279F98u;
            // 0x279f9c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279f78;
        }
    }
    ctx->pc = 0x279FA0u;
    // 0x279fa0: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x279fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279fa4:
    // 0x279fa4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279fa8: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x279fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x279fac: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x279facu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279fb0: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x279FB0u;
    {
        const bool branch_taken_0x279fb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x279FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FB0u;
        // 0x279fb4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fb0) {
            ctx->pc = 0x279FE8u;
            goto label_279fe8;
        }
    }
    ctx->pc = 0x279FB8u;
    // 0x279fb8: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x279FB8u;
    {
        const bool branch_taken_0x279fb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x279FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FB8u;
        // 0x279fbc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fb8) {
            ctx->pc = 0x279FE8u;
            goto label_279fe8;
        }
    }
    ctx->pc = 0x279FC0u;
    // 0x279fc0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x279fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279fc4: 0x0  nop
    ctx->pc = 0x279fc4u;
    // NOP
label_279fc8:
    // 0x279fc8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x279fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x279fcc: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x279fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x279fd0: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x279fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279fd4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x279fd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279fd8: 0x50460004  beql        $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x279FD8u;
    {
        const bool branch_taken_0x279fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x279fd8) {
            ctx->pc = 0x279FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279FD8u;
            // 0x279fdc: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279FECu;
            goto label_279fec;
        }
    }
    ctx->pc = 0x279FE0u;
    // 0x279fe0: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x279FE0u;
    {
        const bool branch_taken_0x279fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x279FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FE0u;
        // 0x279fe4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fe0) {
            ctx->pc = 0x279FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279fc8;
        }
    }
    ctx->pc = 0x279FE8u;
label_279fe8:
    // 0x279fe8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x279fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_279fec:
    // 0x279fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ff0: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279FF0u;
    SET_GPR_U32(ctx, 31, 0x279FF8u);
    ctx->pc = 0x279FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279FF0u;
    // 0x279ff4: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279FF0u, 0x279FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279FF8u;
label_279ff8:
    // 0x279ff8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x279ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279ffc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x279ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27a000: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x27a000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x27a004: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x27a004u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a008: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A008u;
    {
        const bool branch_taken_0x27a008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a008) {
            ctx->pc = 0x27A00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A008u;
            // 0x27a00c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A020u;
            goto label_27a020;
        }
    }
    ctx->pc = 0x27A010u;
    // 0x27a010: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27a010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27a014: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27A014u;
    {
        const bool branch_taken_0x27a014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27a014) {
            ctx->pc = 0x27A018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A014u;
            // 0x27a018: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A04Cu;
            goto label_27a04c;
        }
    }
    ctx->pc = 0x27A01Cu;
    // 0x27a01c: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x27a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_27a020:
    // 0x27a020: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x27a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a024:
    // 0x27a024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27a024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27a028: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x27a028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x27a02c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27a030: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x27a030u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a034: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x27A034u;
    {
        const bool branch_taken_0x27a034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27a034) {
            ctx->pc = 0x27A038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A034u;
            // 0x27a038: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a024;
        }
    }
    ctx->pc = 0x27A03Cu;
    // 0x27a03c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27a040: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x27A040u;
    {
        const bool branch_taken_0x27a040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a040) {
            ctx->pc = 0x27A044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A040u;
            // 0x27a044: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a020;
        }
    }
    ctx->pc = 0x27A048u;
    // 0x27a048: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x27a048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_27a04c:
    // 0x27a04c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x27a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27a050: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x27a050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x27a054: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x27a054u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a058: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x27A058u;
    {
        const bool branch_taken_0x27a058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x27A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A058u;
        // 0x27a05c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a058) {
            ctx->pc = 0x27A090u;
            goto label_27a090;
        }
    }
    ctx->pc = 0x27A060u;
    // 0x27a060: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27A060u;
    {
        const bool branch_taken_0x27a060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A060u;
        // 0x27a064: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a060) {
            ctx->pc = 0x27A090u;
            goto label_27a090;
        }
    }
    ctx->pc = 0x27A068u;
    // 0x27a068: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x27a068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27a06c: 0x0  nop
    ctx->pc = 0x27a06cu;
    // NOP
label_27a070:
    // 0x27a070: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x27a070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27a074: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x27a074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x27a078: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x27a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x27a07c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x27a07cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a080: 0x50460004  beql        $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A080u;
    {
        const bool branch_taken_0x27a080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x27a080) {
            ctx->pc = 0x27A084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A080u;
            // 0x27a084: 0x8fa500b8  lw          $a1, 0xB8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A094u;
            goto label_27a094;
        }
    }
    ctx->pc = 0x27A088u;
    // 0x27a088: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27A088u;
    {
        const bool branch_taken_0x27a088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x27A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A088u;
        // 0x27a08c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a088) {
            ctx->pc = 0x27A070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a070;
        }
    }
    ctx->pc = 0x27A090u;
label_27a090:
    // 0x27a090: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x27a090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_27a094:
    // 0x27a094: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x27A094u;
    SET_GPR_U32(ctx, 31, 0x27A09Cu);
    ctx->pc = 0x27A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A094u;
    // 0x27a098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x27A094u, 0x27A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A09Cu;
label_27a09c:
    // 0x27a09c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27a09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a0a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27a0a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a0a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27a0a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a0a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27a0a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a0ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27a0acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27a0b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27a0b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27a0b4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27a0b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27a0b8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27a0b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27a0bc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27a0bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27a0c0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27a0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27a0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x27A0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0C4u;
        // 0x27a0c8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A0CCu;
    // 0x27a0cc: 0x0  nop
    ctx->pc = 0x27a0ccu;
    // NOP
    ctx->pc = 0x27a0d0u;
}
