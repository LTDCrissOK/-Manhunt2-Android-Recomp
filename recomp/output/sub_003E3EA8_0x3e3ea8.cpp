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

// Function: sub_003E3EA8
// Address: 0x3e3ea8 - 0x3e4018
void sub_003E3EA8_0x3e3ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3EA8_0x3e3ea8");
#endif

    switch (ctx->pc) {
        case 0x3e3ef0u: goto label_3e3ef0;
        case 0x3e3f34u: goto label_3e3f34;
        case 0x3e3f58u: goto label_3e3f58;
        case 0x3e3fb0u: goto label_3e3fb0;
        case 0x3e3fd4u: goto label_3e3fd4;
        default: break;
    }

    ctx->pc = 0x3e3ea8u;

    // 0x3e3ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e3ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e3eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e3eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e3eb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e3eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e3eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e3eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3eb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e3eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e3ebc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e3ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3ec0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e3ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3e3ec4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3e3ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e3ec8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e3ecc: 0x52020049  beql        $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x3E3ECCu;
    {
        const bool branch_taken_0x3e3ecc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e3ecc) {
            ctx->pc = 0x3E3ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3ECCu;
            // 0x3e3ed0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3FF4u;
            goto label_3e3ff4;
        }
    }
    ctx->pc = 0x3E3ED4u;
    // 0x3e3ed4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3e3ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e3ed8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e3ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e3edc: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x3E3EDCu;
    {
        const bool branch_taken_0x3e3edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3edc) {
            ctx->pc = 0x3E3EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3EDCu;
            // 0x3e3ee0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3FF4u;
            goto label_3e3ff4;
        }
    }
    ctx->pc = 0x3E3EE4u;
    // 0x3e3ee4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3e3ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3ee8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3e3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e3eec: 0x0  nop
    ctx->pc = 0x3e3eecu;
    // NOP
label_3e3ef0:
    // 0x3e3ef0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3e3ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3e3ef4: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E3EF4u;
    {
        const bool branch_taken_0x3e3ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e3ef4) {
            ctx->pc = 0x3E3F60u;
            goto label_3e3f60;
        }
    }
    ctx->pc = 0x3E3EFCu;
    // 0x3e3efc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3e3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3e3f00: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3F00u;
    {
        const bool branch_taken_0x3e3f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3f00) {
            ctx->pc = 0x3E3F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3F00u;
            // 0x3e3f04: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3F18u;
            goto label_3e3f18;
        }
    }
    ctx->pc = 0x3E3F08u;
    // 0x3e3f08: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e3f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e3f0c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E3F0Cu;
    {
        const bool branch_taken_0x3e3f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3f0c) {
            ctx->pc = 0x3E3F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3F0Cu;
            // 0x3e3f10: 0xa0920000  sb          $s2, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3F78u;
            goto label_3e3f78;
        }
    }
    ctx->pc = 0x3E3F14u;
    // 0x3e3f14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e3f18:
    // 0x3e3f18: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3e3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3e3f1c: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E3F1Cu;
    {
        const bool branch_taken_0x3e3f1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e3f1c) {
            ctx->pc = 0x3E3F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3F1Cu;
            // 0x3e3f20: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3F38u;
            goto label_3e3f38;
        }
    }
    ctx->pc = 0x3E3F24u;
    // 0x3e3f24: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3e3f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e3f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f2c: 0xc0f8f82  jal         func_3E3E08
    ctx->pc = 0x3E3F2Cu;
    SET_GPR_U32(ctx, 31, 0x3E3F34u);
    ctx->pc = 0x3E3F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F2Cu;
    // 0x3e3f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3E08u, 0x3E3F2Cu, 0x3E3F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F34u;
label_3e3f34:
    // 0x3e3f34: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e3f38:
    // 0x3e3f38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e3f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f3c: 0xa0720000  sb          $s2, 0x0($v1)
    ctx->pc = 0x3e3f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x3e3f40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e3f44: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3e3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e3f48: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3e3f48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e3f4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e3f50: 0xc0f8f96  jal         func_3E3E58
    ctx->pc = 0x3E3F50u;
    SET_GPR_U32(ctx, 31, 0x3E3F58u);
    ctx->pc = 0x3E3F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F50u;
    // 0x3e3f54: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3E58u, 0x3E3F50u, 0x3E3F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F58u;
label_3e3f58:
    // 0x3e3f58: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3E3F58u;
    {
        const bool branch_taken_0x3e3f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3F58u;
        // 0x3e3f5c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3f58) {
            ctx->pc = 0x3E3FD8u;
            goto label_3e3fd8;
        }
    }
    ctx->pc = 0x3E3F60u;
label_3e3f60:
    // 0x3e3f60: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3E3F60u;
    {
        const bool branch_taken_0x3e3f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3f60) {
            ctx->pc = 0x3E3F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3F60u;
            // 0x3e3f64: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3F94u;
            goto label_3e3f94;
        }
    }
    ctx->pc = 0x3E3F68u;
    // 0x3e3f68: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e3f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e3f6c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E3F6Cu;
    {
        const bool branch_taken_0x3e3f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3f6c) {
            ctx->pc = 0x3E3F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3F6Cu;
            // 0x3e3f70: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3F94u;
            goto label_3e3f94;
        }
    }
    ctx->pc = 0x3E3F74u;
    // 0x3e3f74: 0xa0920000  sb          $s2, 0x0($a0)
    ctx->pc = 0x3e3f74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 18));
label_3e3f78:
    // 0x3e3f78: 0xa0720000  sb          $s2, 0x0($v1)
    ctx->pc = 0x3e3f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x3e3f7c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e3f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e3f80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3e3f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e3f84: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3e3f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e3f88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e3f8c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E3F8Cu;
    {
        const bool branch_taken_0x3e3f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3F8Cu;
        // 0x3e3f90: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3f8c) {
            ctx->pc = 0x3E3FD4u;
            goto label_3e3fd4;
        }
    }
    ctx->pc = 0x3E3F94u;
label_3e3f94:
    // 0x3e3f94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3e3f98: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E3F98u;
    {
        const bool branch_taken_0x3e3f98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e3f98) {
            ctx->pc = 0x3E3F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3F98u;
            // 0x3e3f9c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3FB4u;
            goto label_3e3fb4;
        }
    }
    ctx->pc = 0x3E3FA0u;
    // 0x3e3fa0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3e3fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e3fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3fa8: 0xc0f8f96  jal         func_3E3E58
    ctx->pc = 0x3E3FA8u;
    SET_GPR_U32(ctx, 31, 0x3E3FB0u);
    ctx->pc = 0x3E3FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3FA8u;
    // 0x3e3fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3E58u, 0x3E3FA8u, 0x3E3FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3FB0u;
label_3e3fb0:
    // 0x3e3fb0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e3fb4:
    // 0x3e3fb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e3fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3fb8: 0xa0720000  sb          $s2, 0x0($v1)
    ctx->pc = 0x3e3fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x3e3fbc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e3fc0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3e3fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e3fc4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3e3fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e3fc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e3fcc: 0xc0f8f82  jal         func_3E3E08
    ctx->pc = 0x3E3FCCu;
    SET_GPR_U32(ctx, 31, 0x3E3FD4u);
    ctx->pc = 0x3E3FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3FCCu;
    // 0x3e3fd0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3E08u, 0x3E3FCCu, 0x3E3FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3FD4u;
label_3e3fd4:
    // 0x3e3fd4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e3fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e3fd8:
    // 0x3e3fd8: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E3FD8u;
    {
        const bool branch_taken_0x3e3fd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e3fd8) {
            ctx->pc = 0x3E3FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3FD8u;
            // 0x3e3fdc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3FF4u;
            goto label_3e3ff4;
        }
    }
    ctx->pc = 0x3E3FE0u;
    // 0x3e3fe0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3e3fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e3fe4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e3fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e3fe8: 0x5040ffc1  beql        $v0, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x3E3FE8u;
    {
        const bool branch_taken_0x3e3fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3fe8) {
            ctx->pc = 0x3E3FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3FE8u;
            // 0x3e3fec: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3ef0;
        }
    }
    ctx->pc = 0x3E3FF0u;
    // 0x3e3ff0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e3ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e3ff4:
    // 0x3e3ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e3ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e3ffc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e3ffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e4000: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e4000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e4004: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e4004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e4008: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e4008u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e400c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E400Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E400Cu;
        // 0x3e4010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E400Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4014u;
    // 0x3e4014: 0x0  nop
    ctx->pc = 0x3e4014u;
    // NOP
    ctx->pc = 0x3e4018u;
}
