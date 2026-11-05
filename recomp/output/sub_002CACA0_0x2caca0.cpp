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

// Function: sub_002CACA0
// Address: 0x2caca0 - 0x2cad50
void sub_002CACA0_0x2caca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CACA0_0x2caca0");
#endif

    switch (ctx->pc) {
        case 0x2cace8u: goto label_2cace8;
        case 0x2cacf8u: goto label_2cacf8;
        case 0x2cad14u: goto label_2cad14;
        case 0x2cad24u: goto label_2cad24;
        case 0x2cad2cu: goto label_2cad2c;
        default: break;
    }

    ctx->pc = 0x2caca0u;

    // 0x2caca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2caca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2caca4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2caca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2caca8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2caca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cacac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cacacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cacb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cacb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cacb4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2cacb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cacb8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2cacb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2cacbc: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2cacbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x2cacc0: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2cacc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x2cacc4: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x2cacc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x2cacc8: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2cacc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x2caccc: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x2cacccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x2cacd0: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x2cacd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x2cacd4: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2cacd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x2cacd8: 0xae250030  sw          $a1, 0x30($s1)
    ctx->pc = 0x2cacd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 5));
    // 0x2cacdc: 0xae26003c  sw          $a2, 0x3C($s1)
    ctx->pc = 0x2cacdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 6));
    // 0x2cace0: 0xc0f3e00  jal         func_3CF800
    ctx->pc = 0x2CACE0u;
    SET_GPR_U32(ctx, 31, 0x2CACE8u);
    ctx->pc = 0x2CACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CACE0u;
    // 0x2cace4: 0xae270048  sw          $a3, 0x48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF800u, 0x2CACE0u, 0x2CACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACE8u;
label_2cace8:
    // 0x2cace8: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CACE8u;
    {
        const bool branch_taken_0x2cace8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACE8u;
        // 0x2cacec: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cace8) {
            ctx->pc = 0x2CAD34u;
            goto label_2cad34;
        }
    }
    ctx->pc = 0x2CACF0u;
    // 0x2cacf0: 0xc0f3e00  jal         func_3CF800
    ctx->pc = 0x2CACF0u;
    SET_GPR_U32(ctx, 31, 0x2CACF8u);
    ctx->pc = 0x2CACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CACF0u;
    // 0x2cacf4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF800u, 0x2CACF0u, 0x2CACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACF8u;
label_2cacf8:
    // 0x2cacf8: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CACF8u;
    {
        const bool branch_taken_0x2cacf8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACF8u;
        // 0x2cacfc: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cacf8) {
            ctx->pc = 0x2CAD34u;
            goto label_2cad34;
        }
    }
    ctx->pc = 0x2CAD00u;
    // 0x2cad00: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2cad00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2cad04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cad04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad08: 0x8e04b4a8  lw          $a0, -0x4B58($s0)
    ctx->pc = 0x2cad08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cad0c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2CAD0Cu;
    SET_GPR_U32(ctx, 31, 0x2CAD14u);
    ctx->pc = 0x2CAD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD0Cu;
    // 0x2cad10: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2CAD0Cu, 0x2CAD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD14u;
label_2cad14:
    // 0x2cad14: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x2cad14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2cad18: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x2cad18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2cad1c: 0xc0b2d10  jal         func_2CB440
    ctx->pc = 0x2CAD1Cu;
    SET_GPR_U32(ctx, 31, 0x2CAD24u);
    ctx->pc = 0x2CAD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD1Cu;
    // 0x2cad20: 0x8e05b4a8  lw          $a1, -0x4B58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948008)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB440u, 0x2CAD1Cu, 0x2CAD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD24u;
label_2cad24:
    // 0x2cad24: 0xc0b2d30  jal         func_2CB4C0
    ctx->pc = 0x2CAD24u;
    SET_GPR_U32(ctx, 31, 0x2CAD2Cu);
    ctx->pc = 0x2CAD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD24u;
    // 0x2cad28: 0x24043fff  addiu       $a0, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB4C0u, 0x2CAD24u, 0x2CAD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD2Cu;
label_2cad2c:
    // 0x2cad2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CAD2Cu;
    {
        const bool branch_taken_0x2cad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD2Cu;
        // 0x2cad30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad2c) {
            ctx->pc = 0x2CAD38u;
            goto label_2cad38;
        }
    }
    ctx->pc = 0x2CAD34u;
label_2cad34:
    // 0x2cad34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cad34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cad38:
    // 0x2cad38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cad38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cad3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cad3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cad40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cad40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cad44: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD44u;
        // 0x2cad48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAD4Cu;
    // 0x2cad4c: 0x0  nop
    ctx->pc = 0x2cad4cu;
    // NOP
    ctx->pc = 0x2cad50u;
}
