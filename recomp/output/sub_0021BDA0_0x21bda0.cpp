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

// Function: sub_0021BDA0
// Address: 0x21bda0 - 0x21be80
void sub_0021BDA0_0x21bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BDA0_0x21bda0");
#endif

    switch (ctx->pc) {
        case 0x21bdd8u: goto label_21bdd8;
        case 0x21bde0u: goto label_21bde0;
        case 0x21be20u: goto label_21be20;
        case 0x21be28u: goto label_21be28;
        default: break;
    }

    ctx->pc = 0x21bda0u;

    // 0x21bda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21bda4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x21bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x21bda8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bdac: 0x24443500  addiu       $a0, $v0, 0x3500
    ctx->pc = 0x21bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x21bdb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21bdb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21bdb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21bdbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3504u));
    // 0x21bdc0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x21bdc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A350Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A350Cu, _value); } while (0);
    // 0x21bdc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21bdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bdc8: 0x3c11004a  lui         $s1, 0x4A
    ctx->pc = 0x21bdc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)74 << 16));
    // 0x21bdcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21BDCCu;
    {
        const bool branch_taken_0x21bdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDCCu;
        // 0x21bdd0: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bdcc) {
            ctx->pc = 0x21BDE0u;
            goto label_21bde0;
        }
    }
    ctx->pc = 0x21BDD4u;
    // 0x21bdd4: 0x0  nop
    ctx->pc = 0x21bdd4u;
    // NOP
label_21bdd8:
    // 0x21bdd8: 0xc0846b0  jal         func_211AC0
    ctx->pc = 0x21BDD8u;
    SET_GPR_U32(ctx, 31, 0x21BDE0u);
    ctx->pc = 0x211AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211AC0u, 0x21BDD8u, 0x21BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BDE0u;
label_21bde0:
    // 0x21bde0: 0x26033500  addiu       $v1, $s0, 0x3500
    ctx->pc = 0x21bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 13568));
    // 0x21bde4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21bde8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21BDE8u;
    {
        const bool branch_taken_0x21bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDE8u;
        // 0x21bdec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bde8) {
            ctx->pc = 0x21BDF4u;
            goto label_21bdf4;
        }
    }
    ctx->pc = 0x21BDF0u;
    // 0x21bdf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21bdf4:
    // 0x21bdf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BDF4u;
    {
        const bool branch_taken_0x21bdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bdf4) {
            ctx->pc = 0x21BE04u;
            goto label_21be04;
        }
    }
    ctx->pc = 0x21BDFCu;
    // 0x21bdfc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21be00: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x21be00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_21be04:
    // 0x21be04: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21BE04u;
    {
        const bool branch_taken_0x21be04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE04u;
        // 0x21be08: 0x26223510  addiu       $v0, $s1, 0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 13584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be04) {
            ctx->pc = 0x21BDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bdd8;
        }
    }
    ctx->pc = 0x21BE0Cu;
    // 0x21be0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21be10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21be10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21be14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21BE14u;
    {
        const bool branch_taken_0x21be14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE14u;
        // 0x21be18: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be14) {
            ctx->pc = 0x21BE28u;
            goto label_21be28;
        }
    }
    ctx->pc = 0x21BE1Cu;
    // 0x21be1c: 0x0  nop
    ctx->pc = 0x21be1cu;
    // NOP
label_21be20:
    // 0x21be20: 0xc0846b0  jal         func_211AC0
    ctx->pc = 0x21BE20u;
    SET_GPR_U32(ctx, 31, 0x21BE28u);
    ctx->pc = 0x211AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211AC0u, 0x21BE20u, 0x21BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE28u;
label_21be28:
    // 0x21be28: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x21be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21be2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21BE2Cu;
    {
        const bool branch_taken_0x21be2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE2Cu;
        // 0x21be30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be2c) {
            ctx->pc = 0x21BE38u;
            goto label_21be38;
        }
    }
    ctx->pc = 0x21BE34u;
    // 0x21be34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21be34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21be38:
    // 0x21be38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BE38u;
    {
        const bool branch_taken_0x21be38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21be38) {
            ctx->pc = 0x21BE48u;
            goto label_21be48;
        }
    }
    ctx->pc = 0x21BE40u;
    // 0x21be40: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21be44: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x21be44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_21be48:
    // 0x21be48: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x21BE48u;
    {
        const bool branch_taken_0x21be48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x21be48) {
            ctx->pc = 0x21BE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21be20;
        }
    }
    ctx->pc = 0x21BE50u;
    // 0x21be50: 0x8e44bd50  lw          $a0, -0x42B0($s2)
    ctx->pc = 0x21be50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950224)));
    // 0x21be54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BE54u;
    {
        const bool branch_taken_0x21be54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE54u;
        // 0x21be58: 0x2403f7ff  addiu       $v1, $zero, -0x801 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be54) {
            ctx->pc = 0x21BE68u;
            goto label_21be68;
        }
    }
    ctx->pc = 0x21BE5Cu;
    // 0x21be5c: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x21be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x21be60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21be60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21be64: 0xac8200c0  sw          $v0, 0xC0($a0)
    ctx->pc = 0x21be64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
label_21be68:
    // 0x21be68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21be68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21be6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21be6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21be70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21be70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21be74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21be74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21be78: 0x3e00008  jr          $ra
    ctx->pc = 0x21BE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE78u;
        // 0x21be7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BE80u;
}
