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

// Function: sub_0011DDE0
// Address: 0x11dde0 - 0x11dee0
void sub_0011DDE0_0x11dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DDE0_0x11dde0");
#endif

    switch (ctx->pc) {
        case 0x11de10u: goto label_11de10;
        case 0x11de30u: goto label_11de30;
        case 0x11de74u: goto label_11de74;
        case 0x11deb0u: goto label_11deb0;
        default: break;
    }

    ctx->pc = 0x11dde0u;

    // 0x11dde0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11dde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11dde4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11dde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11dde8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11dde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11ddec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ddecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ddf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11ddf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11ddf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11ddf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ddf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11ddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11ddfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11ddfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11de00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11de04: 0x26130390  addiu       $s3, $s0, 0x390
    ctx->pc = 0x11de04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 912));
    // 0x11de08: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11de08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x11de0c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x11de0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_11de10:
    // 0x11de10: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x11de10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x11de14: 0x8c430310  lw          $v1, 0x310($v0)
    ctx->pc = 0x11de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 784)));
    // 0x11de18: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DE18u;
    {
        const bool branch_taken_0x11de18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE18u;
        // 0x11de1c: 0x26140390  addiu       $s4, $s0, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de18) {
            ctx->pc = 0x11DE38u;
            goto label_11de38;
        }
    }
    ctx->pc = 0x11DE20u;
    // 0x11de20: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x11de20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x11de24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11de24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de28: 0xc0aaf7c  jal         func_2ABDF0
    ctx->pc = 0x11DE28u;
    SET_GPR_U32(ctx, 31, 0x11DE30u);
    ctx->pc = 0x11DE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE28u;
    // 0x11de2c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABDF0u, 0x11DE28u, 0x11DE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE30u;
label_11de30:
    // 0x11de30: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x11DE30u;
    {
        const bool branch_taken_0x11de30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE30u;
        // 0x11de34: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de30) {
            ctx->pc = 0x11DEC0u;
            goto label_11dec0;
        }
    }
    ctx->pc = 0x11DE38u;
label_11de38:
    // 0x11de38: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x11de38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11de3c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x11de3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11de40: 0x2e230020  sltiu       $v1, $s1, 0x20
    ctx->pc = 0x11de40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x11de44: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x11DE44u;
    {
        const bool branch_taken_0x11de44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11de44) {
            ctx->pc = 0x11DE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DE44u;
            // 0x11de48: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11de10;
        }
    }
    ctx->pc = 0x11DE4Cu;
    // 0x11de4c: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x11de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x11de50: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x11de50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11de54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DE54u;
    {
        const bool branch_taken_0x11de54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE54u;
        // 0x11de58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de54) {
            ctx->pc = 0x11DE70u;
            goto label_11de70;
        }
    }
    ctx->pc = 0x11DE5Cu;
    // 0x11de5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11de60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11de60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11DE64u;
    {
        const bool branch_taken_0x11de64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE64u;
        // 0x11de68: 0xae020310  sw          $v0, 0x310($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de64) {
            ctx->pc = 0x11DEA4u;
            goto label_11dea4;
        }
    }
    ctx->pc = 0x11DE6Cu;
    // 0x11de6c: 0x0  nop
    ctx->pc = 0x11de6cu;
    // NOP
label_11de70:
    // 0x11de70: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x11de70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_11de74:
    // 0x11de74: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x11de74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x11de78: 0x2ca30020  sltiu       $v1, $a1, 0x20
    ctx->pc = 0x11de78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x11de7c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11DE7Cu;
    {
        const bool branch_taken_0x11de7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE7Cu;
        // 0x11de80: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de7c) {
            ctx->pc = 0x11DEA4u;
            goto label_11dea4;
        }
    }
    ctx->pc = 0x11DE84u;
    // 0x11de84: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x11de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x11de88: 0x8c430310  lw          $v1, 0x310($v0)
    ctx->pc = 0x11de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 784)));
    // 0x11de8c: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11DE8Cu;
    {
        const bool branch_taken_0x11de8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11de8c) {
            ctx->pc = 0x11DE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DE8Cu;
            // 0x11de90: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DE74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11de74;
        }
    }
    ctx->pc = 0x11DE94u;
    // 0x11de94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11de94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11de98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dea0: 0xac620310  sw          $v0, 0x310($v1)
    ctx->pc = 0x11dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 784), GPR_U32(ctx, 2));
label_11dea4:
    // 0x11dea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11dea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dea8: 0xc047f34  jal         func_11FCD0
    ctx->pc = 0x11DEA8u;
    SET_GPR_U32(ctx, 31, 0x11DEB0u);
    ctx->pc = 0x11DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DEA8u;
    // 0x11deac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FCD0u, 0x11DEA8u, 0x11DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DEB0u;
label_11deb0:
    // 0x11deb0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x11deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11deb4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x11deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x11deb8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x11debc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11debcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11dec0:
    // 0x11dec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11dec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dec4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11dec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11dec8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11dec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11decc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11deccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11ded0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11ded0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ded4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11ded4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11ded8: 0x3e00008  jr          $ra
    ctx->pc = 0x11DED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DED8u;
        // 0x11dedc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DEE0u;
}
