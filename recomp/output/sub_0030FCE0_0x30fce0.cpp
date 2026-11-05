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

// Function: sub_0030FCE0
// Address: 0x30fce0 - 0x30fde8
void sub_0030FCE0_0x30fce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FCE0_0x30fce0");
#endif

    switch (ctx->pc) {
        case 0x30fd64u: goto label_30fd64;
        default: break;
    }

    ctx->pc = 0x30fce0u;

    // 0x30fce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30fce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30fce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30fce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30fce8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30fcec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30fcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fcf0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x30fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x30fcf4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x30fcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x30fcf8: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x30fcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x30fcfc: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x30FCFCu;
    {
        const bool branch_taken_0x30fcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FCFCu;
        // 0x30fd00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fcfc) {
            ctx->pc = 0x30FDD8u;
            goto label_30fdd8;
        }
    }
    ctx->pc = 0x30FD04u;
    // 0x30fd04: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x30fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x30fd08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30fd08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd0c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x30fd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x30fd10: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30FD10u;
    {
        const bool branch_taken_0x30fd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD10u;
        // 0x30fd14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd10) {
            ctx->pc = 0x30FD24u;
            goto label_30fd24;
        }
    }
    ctx->pc = 0x30FD18u;
    // 0x30fd18: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x30fd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30fd1c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30FD1Cu;
    {
        const bool branch_taken_0x30fd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fd1c) {
            ctx->pc = 0x30FD28u;
            goto label_30fd28;
        }
    }
    ctx->pc = 0x30FD24u;
label_30fd24:
    // 0x30fd24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30fd28:
    // 0x30fd28: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30FD28u;
    {
        const bool branch_taken_0x30fd28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD28u;
        // 0x30fd2c: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd28) {
            ctx->pc = 0x30FDB4u;
            goto label_30fdb4;
        }
    }
    ctx->pc = 0x30FD30u;
    // 0x30fd30: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x30FD30u;
    {
        const bool branch_taken_0x30fd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD30u;
        // 0x30fd34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd30) {
            ctx->pc = 0x30FDD8u;
            goto label_30fdd8;
        }
    }
    ctx->pc = 0x30FD38u;
    // 0x30fd38: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x30fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x30fd3c: 0x3862001f  xori        $v0, $v1, 0x1F
    ctx->pc = 0x30fd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)31);
    // 0x30fd40: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30FD40u;
    {
        const bool branch_taken_0x30fd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD40u;
        // 0x30fd44: 0x3862020f  xori        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd40) {
            ctx->pc = 0x30FDA4u;
            goto label_30fda4;
        }
    }
    ctx->pc = 0x30FD48u;
    // 0x30fd48: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x30fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x30fd4c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x30fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x30fd50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30fd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30fd54: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x30FD54u;
    {
        const bool branch_taken_0x30fd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x30FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD54u;
        // 0x30fd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd54) {
            ctx->pc = 0x30FDD8u;
            goto label_30fdd8;
        }
    }
    ctx->pc = 0x30FD5Cu;
    // 0x30fd5c: 0xc08f644  jal         func_23D910
    ctx->pc = 0x30FD5Cu;
    SET_GPR_U32(ctx, 31, 0x30FD64u);
    ctx->pc = 0x30FD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FD5Cu;
    // 0x30fd60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D910u, 0x30FD5Cu, 0x30FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD64u;
label_30fd64:
    // 0x30fd64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30fd64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30FD68u;
    {
        const bool branch_taken_0x30fd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD68u;
        // 0x30fd6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd68) {
            ctx->pc = 0x30FD7Cu;
            goto label_30fd7c;
        }
    }
    ctx->pc = 0x30FD70u;
    // 0x30fd70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fd74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30FD74u;
    {
        const bool branch_taken_0x30fd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD74u;
        // 0x30fd78: 0xae031108  sw          $v1, 0x1108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd74) {
            ctx->pc = 0x30FDD8u;
            goto label_30fdd8;
        }
    }
    ctx->pc = 0x30FD7Cu;
label_30fd7c:
    // 0x30fd7c: 0x8e021060  lw          $v0, 0x1060($s0)
    ctx->pc = 0x30fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
    // 0x30fd80: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x30fd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x30fd84: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30FD84u;
    {
        const bool branch_taken_0x30fd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fd84) {
            ctx->pc = 0x30FD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FD84u;
            // 0x30fd88: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FD98u;
            goto label_30fd98;
        }
    }
    ctx->pc = 0x30FD8Cu;
    // 0x30fd8c: 0x8e021108  lw          $v0, 0x1108($s0)
    ctx->pc = 0x30fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4360)));
    // 0x30fd90: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x30FD90u;
    {
        const bool branch_taken_0x30fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD90u;
        // 0x30fd94: 0x62102a  slt         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd90) {
            ctx->pc = 0x30FDD8u;
            goto label_30fdd8;
        }
    }
    ctx->pc = 0x30FD98u;
label_30fd98:
    // 0x30fd98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fd9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x30FD9Cu;
    {
        const bool branch_taken_0x30fd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD9Cu;
        // 0x30fda0: 0xae031108  sw          $v1, 0x1108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd9c) {
            ctx->pc = 0x30FDD8u;
            goto label_30fdd8;
        }
    }
    ctx->pc = 0x30FDA4u;
label_30fda4:
    // 0x30fda4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30FDA4u;
    {
        const bool branch_taken_0x30fda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDA4u;
        // 0x30fda8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fda4) {
            ctx->pc = 0x30FDD8u;
            goto label_30fdd8;
        }
    }
    ctx->pc = 0x30FDACu;
    // 0x30fdac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30FDACu;
    {
        const bool branch_taken_0x30fdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDACu;
        // 0x30fdb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fdac) {
            ctx->pc = 0x30FDD8u;
            goto label_30fdd8;
        }
    }
    ctx->pc = 0x30FDB4u;
label_30fdb4:
    // 0x30fdb4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x30fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x30fdb8: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x30fdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x30fdbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30FDBCu;
    {
        const bool branch_taken_0x30fdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDBCu;
        // 0x30fdc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fdbc) {
            ctx->pc = 0x30FDD8u;
            goto label_30fdd8;
        }
    }
    ctx->pc = 0x30FDC4u;
    // 0x30fdc4: 0x8e021060  lw          $v0, 0x1060($s0)
    ctx->pc = 0x30fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
    // 0x30fdc8: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x30fdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x30fdcc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x30FDCCu;
    {
        const bool branch_taken_0x30fdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fdcc) {
            ctx->pc = 0x30FDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FDCCu;
            // 0x30fdd0: 0xae001108  sw          $zero, 0x1108($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4360), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FDD4u;
            goto label_30fdd4;
        }
    }
    ctx->pc = 0x30FDD4u;
label_30fdd4:
    // 0x30fdd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30fdd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fdd8:
    // 0x30fdd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30fdd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30fddc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30fddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30fde0: 0x3e00008  jr          $ra
    ctx->pc = 0x30FDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDE0u;
        // 0x30fde4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FDE8u;
}
