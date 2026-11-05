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

// Function: sub_00227C80
// Address: 0x227c80 - 0x227da0
void sub_00227C80_0x227c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227C80_0x227c80");
#endif

    switch (ctx->pc) {
        case 0x227cd8u: goto label_227cd8;
        case 0x227d4cu: goto label_227d4c;
        default: break;
    }

    ctx->pc = 0x227c80u;

    // 0x227c80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x227c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x227c84: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x227c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x227c88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x227c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x227c8c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x227c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x227c90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x227c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x227c94: 0x24513d20  addiu       $s1, $v0, 0x3D20
    ctx->pc = 0x227c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x227c98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x227c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x227c9c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x227c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x227ca0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x227ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x227ca4: 0x3c120400  lui         $s2, 0x400
    ctx->pc = 0x227ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1024 << 16));
    // 0x227ca8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x227ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x227cac: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x227cacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227cb4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x227cb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227cb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x227cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x227cbc: 0x8c73bd50  lw          $s3, -0x42B0($v1)
    ctx->pc = 0x227cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x227cc0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x227cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x227cc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227cc8: 0xa043971c  sb          $v1, -0x68E4($v0)
    ctx->pc = 0x227cc8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F971Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F971Cu, _value); } while (0);
    // 0x227ccc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x227CCCu;
    {
        const bool branch_taken_0x227ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CCCu;
        // 0x227cd0: 0xae24000c  sw          $a0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ccc) {
            ctx->pc = 0x227D50u;
            goto label_227d50;
        }
    }
    ctx->pc = 0x227CD4u;
    // 0x227cd4: 0x0  nop
    ctx->pc = 0x227cd4u;
    // NOP
label_227cd8:
    // 0x227cd8: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x227CD8u;
    {
        const bool branch_taken_0x227cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227cd8) {
            ctx->pc = 0x227CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227CD8u;
            // 0x227cdc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227D54u;
            goto label_227d54;
        }
    }
    ctx->pc = 0x227CE0u;
    // 0x227ce0: 0x5270001c  beql        $s3, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x227CE0u;
    {
        const bool branch_taken_0x227ce0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x227ce0) {
            ctx->pc = 0x227CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227CE0u;
            // 0x227ce4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227D54u;
            goto label_227d54;
        }
    }
    ctx->pc = 0x227CE8u;
    // 0x227ce8: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x227ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x227cec: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x227cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x227cf0: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x227CF0u;
    {
        const bool branch_taken_0x227cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227cf0) {
            ctx->pc = 0x227CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227CF0u;
            // 0x227cf4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227D54u;
            goto label_227d54;
        }
    }
    ctx->pc = 0x227CF8u;
    // 0x227cf8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x227cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x227cfc: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x227CFCu;
    {
        const bool branch_taken_0x227cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227cfc) {
            ctx->pc = 0x227D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227CFCu;
            // 0x227d00: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227D54u;
            goto label_227d54;
        }
    }
    ctx->pc = 0x227D04u;
    // 0x227d04: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x227d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x227d08: 0x10550011  beq         $v0, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x227D08u;
    {
        const bool branch_taken_0x227d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x227D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D08u;
        // 0x227d0c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d08) {
            ctx->pc = 0x227D50u;
            goto label_227d50;
        }
    }
    ctx->pc = 0x227D10u;
    // 0x227d10: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x227D10u;
    {
        const bool branch_taken_0x227d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227d10) {
            ctx->pc = 0x227D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227D10u;
            // 0x227d14: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227D54u;
            goto label_227d54;
        }
    }
    ctx->pc = 0x227D18u;
    // 0x227d18: 0x8e03036c  lw          $v1, 0x36C($s0)
    ctx->pc = 0x227d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x227d1c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x227d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x227d20: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x227D20u;
    {
        const bool branch_taken_0x227d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227d20) {
            ctx->pc = 0x227D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227D20u;
            // 0x227d24: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227D54u;
            goto label_227d54;
        }
    }
    ctx->pc = 0x227D28u;
    // 0x227d28: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x227d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x227d2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x227d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x227d30: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x227D30u;
    {
        const bool branch_taken_0x227d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227d30) {
            ctx->pc = 0x227D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227D30u;
            // 0x227d34: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227D54u;
            goto label_227d54;
        }
    }
    ctx->pc = 0x227D38u;
    // 0x227d38: 0x721024  and         $v0, $v1, $s2
    ctx->pc = 0x227d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x227d3c: 0x50520005  beql        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x227D3Cu;
    {
        const bool branch_taken_0x227d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x227d3c) {
            ctx->pc = 0x227D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227D3Cu;
            // 0x227d40: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227D54u;
            goto label_227d54;
        }
    }
    ctx->pc = 0x227D44u;
    // 0x227d44: 0xc089f8a  jal         func_227E28
    ctx->pc = 0x227D44u;
    SET_GPR_U32(ctx, 31, 0x227D4Cu);
    ctx->pc = 0x227D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227D44u;
    // 0x227d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E28u, 0x227D44u, 0x227D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D4Cu;
label_227d4c:
    // 0x227d4c: 0xa2140708  sb          $s4, 0x708($s0)
    ctx->pc = 0x227d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1800), (uint8_t)GPR_U32(ctx, 20));
label_227d50:
    // 0x227d50: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x227d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_227d54:
    // 0x227d54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x227d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d58: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x227D58u;
    {
        const bool branch_taken_0x227d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D58u;
        // 0x227d5c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d58) {
            ctx->pc = 0x227D64u;
            goto label_227d64;
        }
    }
    ctx->pc = 0x227D60u;
    // 0x227d60: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x227d60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_227d64:
    // 0x227d64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x227D64u;
    {
        const bool branch_taken_0x227d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x227d64) {
            ctx->pc = 0x227D74u;
            goto label_227d74;
        }
    }
    ctx->pc = 0x227D6Cu;
    // 0x227d6c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x227d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x227d70: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x227d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_227d74:
    // 0x227d74: 0x5600ffd8  bnel        $s0, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x227D74u;
    {
        const bool branch_taken_0x227d74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x227d74) {
            ctx->pc = 0x227D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227D74u;
            // 0x227d78: 0x920206fc  lbu         $v0, 0x6FC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227cd8;
        }
    }
    ctx->pc = 0x227D7Cu;
    // 0x227d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227d80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227d84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x227d84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227d88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x227d88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x227d8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x227d8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227d90: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x227d90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x227d94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x227d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227d98: 0x3e00008  jr          $ra
    ctx->pc = 0x227D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D98u;
        // 0x227d9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227DA0u;
}
