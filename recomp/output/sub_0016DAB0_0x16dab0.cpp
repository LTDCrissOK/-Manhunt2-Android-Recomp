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

// Function: sub_0016DAB0
// Address: 0x16dab0 - 0x16db48
void sub_0016DAB0_0x16dab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DAB0_0x16dab0");
#endif

    switch (ctx->pc) {
        case 0x16dac4u: goto label_16dac4;
        case 0x16dad4u: goto label_16dad4;
        case 0x16dadcu: goto label_16dadc;
        case 0x16daecu: goto label_16daec;
        case 0x16dafcu: goto label_16dafc;
        case 0x16db14u: goto label_16db14;
        case 0x16db24u: goto label_16db24;
        case 0x16db34u: goto label_16db34;
        default: break;
    }

    ctx->pc = 0x16dab0u;

    // 0x16dab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16dab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16dab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16dab8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16dab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16dabc: 0xc05baa8  jal         func_16EAA0
    ctx->pc = 0x16DABCu;
    SET_GPR_U32(ctx, 31, 0x16DAC4u);
    ctx->pc = 0x16DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DABCu;
    // 0x16dac0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EAA0u, 0x16DABCu, 0x16DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DAC4u;
label_16dac4:
    // 0x16dac4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x16DAC4u;
    {
        const bool branch_taken_0x16dac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dac4) {
            ctx->pc = 0x16DAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DAC4u;
            // 0x16dac8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DB38u;
            goto label_16db38;
        }
    }
    ctx->pc = 0x16DACCu;
    // 0x16dacc: 0xc05b9e0  jal         func_16E780
    ctx->pc = 0x16DACCu;
    SET_GPR_U32(ctx, 31, 0x16DAD4u);
    ctx->pc = 0x16DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DACCu;
    // 0x16dad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E780u, 0x16DACCu, 0x16DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DAD4u;
label_16dad4:
    // 0x16dad4: 0xc05ba26  jal         func_16E898
    ctx->pc = 0x16DAD4u;
    SET_GPR_U32(ctx, 31, 0x16DADCu);
    ctx->pc = 0x16DAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DAD4u;
    // 0x16dad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E898u, 0x16DAD4u, 0x16DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DADCu;
label_16dadc:
    // 0x16dadc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DADCu;
    {
        const bool branch_taken_0x16dadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dadc) {
            ctx->pc = 0x16DAF4u;
            goto label_16daf4;
        }
    }
    ctx->pc = 0x16DAE4u;
    // 0x16dae4: 0xc05b8b0  jal         func_16E2C0
    ctx->pc = 0x16DAE4u;
    SET_GPR_U32(ctx, 31, 0x16DAECu);
    ctx->pc = 0x16DAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DAE4u;
    // 0x16dae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E2C0u, 0x16DAE4u, 0x16DAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DAECu;
label_16daec:
    // 0x16daec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16DAECu;
    {
        const bool branch_taken_0x16daec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAECu;
        // 0x16daf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16daec) {
            ctx->pc = 0x16DB38u;
            goto label_16db38;
        }
    }
    ctx->pc = 0x16DAF4u;
label_16daf4:
    // 0x16daf4: 0xc05a618  jal         func_169860
    ctx->pc = 0x16DAF4u;
    SET_GPR_U32(ctx, 31, 0x16DAFCu);
    ctx->pc = 0x16DAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DAF4u;
    // 0x16daf8: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16DAF4u, 0x16DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DAFCu;
label_16dafc:
    // 0x16dafc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16db00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16db00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16db04: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16db04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16db08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16db08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16db0c: 0xc043a2c  jal         func_10E8B0
    ctx->pc = 0x16DB0Cu;
    SET_GPR_U32(ctx, 31, 0x16DB14u);
    ctx->pc = 0x16DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB0Cu;
    // 0x16db10: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8B0u, 0x16DB0Cu, 0x16DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB14u;
label_16db14:
    // 0x16db14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DB14u;
    {
        const bool branch_taken_0x16db14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB14u;
        // 0x16db18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db14) {
            ctx->pc = 0x16DB2Cu;
            goto label_16db2c;
        }
    }
    ctx->pc = 0x16DB1Cu;
    // 0x16db1c: 0xc05b72c  jal         func_16DCB0
    ctx->pc = 0x16DB1Cu;
    SET_GPR_U32(ctx, 31, 0x16DB24u);
    ctx->pc = 0x16DB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB1Cu;
    // 0x16db20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DCB0u, 0x16DB1Cu, 0x16DB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB24u;
label_16db24:
    // 0x16db24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16DB24u;
    {
        const bool branch_taken_0x16db24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB24u;
        // 0x16db28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db24) {
            ctx->pc = 0x16DB38u;
            goto label_16db38;
        }
    }
    ctx->pc = 0x16DB2Cu;
label_16db2c:
    // 0x16db2c: 0xc05b7f0  jal         func_16DFC0
    ctx->pc = 0x16DB2Cu;
    SET_GPR_U32(ctx, 31, 0x16DB34u);
    ctx->pc = 0x16DB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB2Cu;
    // 0x16db30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DFC0u, 0x16DB2Cu, 0x16DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB34u;
label_16db34:
    // 0x16db34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16db34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16db38:
    // 0x16db38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16db38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16db3c: 0x3e00008  jr          $ra
    ctx->pc = 0x16DB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB3Cu;
        // 0x16db40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DB44u;
    // 0x16db44: 0x0  nop
    ctx->pc = 0x16db44u;
    // NOP
    ctx->pc = 0x16db48u;
}
