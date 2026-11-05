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

// Function: sub_0016CD48
// Address: 0x16cd48 - 0x16ce18
void sub_0016CD48_0x16cd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CD48_0x16cd48");
#endif

    switch (ctx->pc) {
        case 0x16cd64u: goto label_16cd64;
        case 0x16cd74u: goto label_16cd74;
        case 0x16cda8u: goto label_16cda8;
        default: break;
    }

    ctx->pc = 0x16cd48u;

    // 0x16cd48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16cd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16cd4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16cd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16cd50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16cd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16cd54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16cd58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16cd58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd5c: 0xc04f8e6  jal         func_13E398
    ctx->pc = 0x16CD5Cu;
    SET_GPR_U32(ctx, 31, 0x16CD64u);
    ctx->pc = 0x16CD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD5Cu;
    // 0x16cd60: 0x922500f8  lbu         $a1, 0xF8($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E398u, 0x16CD5Cu, 0x16CD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD64u;
label_16cd64:
    // 0x16cd64: 0x922500f8  lbu         $a1, 0xF8($s1)
    ctx->pc = 0x16cd64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x16cd68: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x16cd68u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x16cd6c: 0xc05b39a  jal         func_16CE68
    ctx->pc = 0x16CD6Cu;
    SET_GPR_U32(ctx, 31, 0x16CD74u);
    ctx->pc = 0x16CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD6Cu;
    // 0x16cd70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CE68u, 0x16CD6Cu, 0x16CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD74u;
label_16cd74:
    // 0x16cd74: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x16cd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x16cd78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16cd78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd7c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CD7Cu;
    {
        const bool branch_taken_0x16cd7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD7Cu;
        // 0x16cd80: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd7c) {
            ctx->pc = 0x16CD8Cu;
            goto label_16cd8c;
        }
    }
    ctx->pc = 0x16CD84u;
    // 0x16cd84: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CD84u;
    {
        const bool branch_taken_0x16cd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cd84) {
            ctx->pc = 0x16CD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CD84u;
            // 0x16cd88: 0x8e220118  lw          $v0, 0x118($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CD94u;
            goto label_16cd94;
        }
    }
    ctx->pc = 0x16CD8Cu;
label_16cd8c:
    // 0x16cd8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cd90: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x16cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_16cd94:
    // 0x16cd94: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x16CD94u;
    {
        const bool branch_taken_0x16cd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD94u;
        // 0x16cd98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd94) {
            ctx->pc = 0x16CE04u;
            goto label_16ce04;
        }
    }
    ctx->pc = 0x16CD9Cu;
    // 0x16cd9c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x16cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x16cda0: 0xc05a618  jal         func_169860
    ctx->pc = 0x16CDA0u;
    SET_GPR_U32(ctx, 31, 0x16CDA8u);
    ctx->pc = 0x16CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CDA0u;
    // 0x16cda4: 0xae230118  sw          $v1, 0x118($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16CDA0u, 0x16CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CDA8u;
label_16cda8:
    // 0x16cda8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16cdac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16cdb0: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16cdb4: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x16cdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x16cdb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16cdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cdbc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16CDBCu;
    {
        const bool branch_taken_0x16cdbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDBCu;
        // 0x16cdc0: 0x8c650108  lw          $a1, 0x108($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdbc) {
            ctx->pc = 0x16CDE4u;
            goto label_16cde4;
        }
    }
    ctx->pc = 0x16CDC4u;
    // 0x16cdc4: 0x8ca30ff0  lw          $v1, 0xFF0($a1)
    ctx->pc = 0x16cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4080)));
    // 0x16cdc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cdcc: 0xac640158  sw          $a0, 0x158($v1)
    ctx->pc = 0x16cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 4));
    // 0x16cdd0: 0x8ca20ff0  lw          $v0, 0xFF0($a1)
    ctx->pc = 0x16cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4080)));
    // 0x16cdd4: 0xac440160  sw          $a0, 0x160($v0)
    ctx->pc = 0x16cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 4));
    // 0x16cdd8: 0x8ca30ff0  lw          $v1, 0xFF0($a1)
    ctx->pc = 0x16cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4080)));
    // 0x16cddc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16CDDCu;
    {
        const bool branch_taken_0x16cddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDDCu;
        // 0x16cde0: 0xac600178  sw          $zero, 0x178($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cddc) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CDE4u;
label_16cde4:
    // 0x16cde4: 0x8ca30ff0  lw          $v1, 0xFF0($a1)
    ctx->pc = 0x16cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4080)));
    // 0x16cde8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cdec: 0xac600158  sw          $zero, 0x158($v1)
    ctx->pc = 0x16cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 0));
    // 0x16cdf0: 0x8ca20ff0  lw          $v0, 0xFF0($a1)
    ctx->pc = 0x16cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4080)));
    // 0x16cdf4: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x16cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
    // 0x16cdf8: 0x8ca30ff0  lw          $v1, 0xFF0($a1)
    ctx->pc = 0x16cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4080)));
    // 0x16cdfc: 0xac640178  sw          $a0, 0x178($v1)
    ctx->pc = 0x16cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 376), GPR_U32(ctx, 4));
label_16ce00:
    // 0x16ce00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ce00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ce04:
    // 0x16ce04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ce04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ce08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ce08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ce0c: 0x3e00008  jr          $ra
    ctx->pc = 0x16CE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE0Cu;
        // 0x16ce10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CE14u;
    // 0x16ce14: 0x0  nop
    ctx->pc = 0x16ce14u;
    // NOP
    ctx->pc = 0x16ce18u;
}
