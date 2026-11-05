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

// Function: sub_00278E00
// Address: 0x278e00 - 0x278fb8
void sub_00278E00_0x278e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278E00_0x278e00");
#endif

    switch (ctx->pc) {
        case 0x278e30u: goto label_278e30;
        case 0x278e60u: goto label_278e60;
        case 0x278ea0u: goto label_278ea0;
        case 0x278ec8u: goto label_278ec8;
        case 0x278eccu: goto label_278ecc;
        case 0x278f18u: goto label_278f18;
        case 0x278f44u: goto label_278f44;
        case 0x278f68u: goto label_278f68;
        case 0x278f94u: goto label_278f94;
        default: break;
    }

    ctx->pc = 0x278e00u;

    // 0x278e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278e08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278e0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x278e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x278e10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x278e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x278e14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x278e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x278e18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x278e18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278e1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x278e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x278e20: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x278e20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278e24: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x278e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x278e28: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x278E28u;
    SET_GPR_U32(ctx, 31, 0x278E30u);
    ctx->pc = 0x278E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278E28u;
    // 0x278e2c: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x278E28u, 0x278E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E30u;
label_278e30:
    // 0x278e30: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278e34: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x278e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x278e38: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278e3c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x278e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x278e40: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x278e40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278e44: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x278E44u;
    {
        const bool branch_taken_0x278e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x278e44) {
            ctx->pc = 0x278E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278E44u;
            // 0x278e48: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278E60u;
            goto label_278e60;
        }
    }
    ctx->pc = 0x278E4Cu;
    // 0x278e4c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278e50: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x278E50u;
    {
        const bool branch_taken_0x278e50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x278E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E50u;
        // 0x278e54: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e50) {
            ctx->pc = 0x278E90u;
            goto label_278e90;
        }
    }
    ctx->pc = 0x278E58u;
    // 0x278e58: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278e5c: 0x0  nop
    ctx->pc = 0x278e5cu;
    // NOP
label_278e60:
    // 0x278e60: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x278e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x278e64: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x278e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278e68: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x278e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278e6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278e70: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x278e74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278e78: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x278e78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278e7c: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x278E7Cu;
    {
        const bool branch_taken_0x278e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x278e7c) {
            ctx->pc = 0x278E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278E7Cu;
            // 0x278e80: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278e60;
        }
    }
    ctx->pc = 0x278E84u;
    // 0x278e84: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278e88: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x278E88u;
    {
        const bool branch_taken_0x278e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278e88) {
            ctx->pc = 0x278E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278E88u;
            // 0x278e8c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278e60;
        }
    }
    ctx->pc = 0x278E90u;
label_278e90:
    // 0x278e90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x278e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278e98: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x278E98u;
    SET_GPR_U32(ctx, 31, 0x278EA0u);
    ctx->pc = 0x278E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278E98u;
    // 0x278e9c: 0x24a60004  addiu       $a2, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x278E98u, 0x278EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EA0u;
label_278ea0:
    // 0x278ea0: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x278ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278ea4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x278ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278ea8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x278ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x278eac: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x278eacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278eb0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x278EB0u;
    {
        const bool branch_taken_0x278eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278eb0) {
            ctx->pc = 0x278EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278EB0u;
            // 0x278eb4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278EC8u;
            goto label_278ec8;
        }
    }
    ctx->pc = 0x278EB8u;
    // 0x278eb8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278ebc: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x278EBCu;
    {
        const bool branch_taken_0x278ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x278ebc) {
            ctx->pc = 0x278EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278EBCu;
            // 0x278ec0: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278EF4u;
            goto label_278ef4;
        }
    }
    ctx->pc = 0x278EC4u;
    // 0x278ec4: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_278ec8:
    // 0x278ec8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_278ecc:
    // 0x278ecc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278ed0: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x278ed4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x278ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x278ed8: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x278ed8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278edc: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x278EDCu;
    {
        const bool branch_taken_0x278edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x278edc) {
            ctx->pc = 0x278EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278EDCu;
            // 0x278ee0: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278ecc;
        }
    }
    ctx->pc = 0x278EE4u;
    // 0x278ee4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278ee8: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x278EE8u;
    {
        const bool branch_taken_0x278ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x278ee8) {
            ctx->pc = 0x278EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278EE8u;
            // 0x278eec: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278ec8;
        }
    }
    ctx->pc = 0x278EF0u;
    // 0x278ef0: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x278ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_278ef4:
    // 0x278ef4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278ef8: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x278ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x278efc: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x278efcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278f00: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x278F00u;
    {
        const bool branch_taken_0x278f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x278F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F00u;
        // 0x278f04: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f00) {
            ctx->pc = 0x278F38u;
            goto label_278f38;
        }
    }
    ctx->pc = 0x278F08u;
    // 0x278f08: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x278F08u;
    {
        const bool branch_taken_0x278f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x278F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F08u;
        // 0x278f0c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f08) {
            ctx->pc = 0x278F38u;
            goto label_278f38;
        }
    }
    ctx->pc = 0x278F10u;
    // 0x278f10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x278f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278f14: 0x0  nop
    ctx->pc = 0x278f14u;
    // NOP
label_278f18:
    // 0x278f18: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x278f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x278f1c: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x278f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x278f20: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x278f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x278f24: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x278f24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278f28: 0x50460004  beql        $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x278F28u;
    {
        const bool branch_taken_0x278f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x278f28) {
            ctx->pc = 0x278F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278F28u;
            // 0x278f2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278F3Cu;
            goto label_278f3c;
        }
    }
    ctx->pc = 0x278F30u;
    // 0x278f30: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x278F30u;
    {
        const bool branch_taken_0x278f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x278F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F30u;
        // 0x278f34: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f30) {
            ctx->pc = 0x278F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278f18;
        }
    }
    ctx->pc = 0x278F38u;
label_278f38:
    // 0x278f38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x278f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278f3c:
    // 0x278f3c: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x278F3Cu;
    SET_GPR_U32(ctx, 31, 0x278F44u);
    ctx->pc = 0x278F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F3Cu;
    // 0x278f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x278F3Cu, 0x278F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F44u;
label_278f44:
    // 0x278f44: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x278f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278f48: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278f4c: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x278f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x278f50: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x278f50u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278f54: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x278F54u;
    {
        const bool branch_taken_0x278f54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x278F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F54u;
        // 0x278f58: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f54) {
            ctx->pc = 0x278F88u;
            goto label_278f88;
        }
    }
    ctx->pc = 0x278F5Cu;
    // 0x278f5c: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x278F5Cu;
    {
        const bool branch_taken_0x278f5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x278F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F5Cu;
        // 0x278f60: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f5c) {
            ctx->pc = 0x278F88u;
            goto label_278f88;
        }
    }
    ctx->pc = 0x278F64u;
    // 0x278f64: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x278f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_278f68:
    // 0x278f68: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x278f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x278f6c: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x278f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x278f70: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x278f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x278f74: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x278f74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278f78: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x278F78u;
    {
        const bool branch_taken_0x278f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x278F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F78u;
        // 0x278f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f78) {
            ctx->pc = 0x278F8Cu;
            goto label_278f8c;
        }
    }
    ctx->pc = 0x278F80u;
    // 0x278f80: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x278F80u;
    {
        const bool branch_taken_0x278f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x278F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F80u;
        // 0x278f84: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f80) {
            ctx->pc = 0x278F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278f68;
        }
    }
    ctx->pc = 0x278F88u;
label_278f88:
    // 0x278f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278f8c:
    // 0x278f8c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x278F8Cu;
    SET_GPR_U32(ctx, 31, 0x278F94u);
    ctx->pc = 0x278F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F8Cu;
    // 0x278f90: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x278F8Cu, 0x278F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F94u;
label_278f94:
    // 0x278f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278f98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278f9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x278f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278fa0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x278fa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x278fa4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x278fa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278fa8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x278fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x278fac: 0x3e00008  jr          $ra
    ctx->pc = 0x278FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278FACu;
        // 0x278fb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278FB4u;
    // 0x278fb4: 0x0  nop
    ctx->pc = 0x278fb4u;
    // NOP
    ctx->pc = 0x278fb8u;
}
