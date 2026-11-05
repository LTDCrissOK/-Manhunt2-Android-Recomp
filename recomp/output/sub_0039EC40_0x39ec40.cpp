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

// Function: sub_0039EC40
// Address: 0x39ec40 - 0x39ecf0
void sub_0039EC40_0x39ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EC40_0x39ec40");
#endif

    switch (ctx->pc) {
        case 0x39ec74u: goto label_39ec74;
        case 0x39ec7cu: goto label_39ec7c;
        case 0x39ec90u: goto label_39ec90;
        case 0x39ecb0u: goto label_39ecb0;
        case 0x39ecccu: goto label_39eccc;
        default: break;
    }

    ctx->pc = 0x39ec40u;

    // 0x39ec40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39ec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39ec44: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x39ec48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ec48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ec4c: 0x2450adfc  addiu       $s0, $v0, -0x5204
    ctx->pc = 0x39ec4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946300));
    // 0x39ec50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39ec50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39ec54: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x39ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x39ec58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39ec58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40ADFCu));
    // 0x39ec5c: 0x2463adf8  addiu       $v1, $v1, -0x5208
    ctx->pc = 0x39ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946296));
    // 0x39ec60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40ADF8u));
    // 0x39ec64: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x39EC64u;
    {
        const bool branch_taken_0x39ec64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC64u;
        // 0x39ec68: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec64) {
            ctx->pc = 0x39ECDCu;
            goto label_39ecdc;
        }
    }
    ctx->pc = 0x39EC6Cu;
    // 0x39ec6c: 0xc0e5816  jal         func_396058
    ctx->pc = 0x39EC6Cu;
    SET_GPR_U32(ctx, 31, 0x39EC74u);
    ctx->pc = 0x396058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396058u, 0x39EC6Cu, 0x39EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EC74u;
label_39ec74:
    // 0x39ec74: 0xc0e8252  jal         func_3A0948
    ctx->pc = 0x39EC74u;
    SET_GPR_U32(ctx, 31, 0x39EC7Cu);
    ctx->pc = 0x3A0948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0948u, 0x39EC74u, 0x39EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EC7Cu;
label_39ec7c:
    // 0x39ec7c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x39ec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x39ec80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ec80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ec84: 0x2484ae10  addiu       $a0, $a0, -0x51F0
    ctx->pc = 0x39ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946320));
    // 0x39ec88: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x39EC88u;
    SET_GPR_U32(ctx, 31, 0x39EC90u);
    ctx->pc = 0x39EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EC88u;
    // 0x39ec8c: 0x240609e0  addiu       $a2, $zero, 0x9E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x39EC88u, 0x39EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EC90u;
label_39ec90:
    // 0x39ec90: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39ec90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x39ec94: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x39ec94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x39ec98: 0x24c6ebc8  addiu       $a2, $a2, -0x1438
    ctx->pc = 0x39ec98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962120));
    // 0x39ec9c: 0x2508bd80  addiu       $t0, $t0, -0x4280
    ctx->pc = 0x39ec9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950272));
    // 0x39eca0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x39eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39eca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39eca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eca8: 0xc0eb35c  jal         func_3ACD70
    ctx->pc = 0x39ECA8u;
    SET_GPR_U32(ctx, 31, 0x39ECB0u);
    ctx->pc = 0x39ECACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ECA8u;
    // 0x39ecac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACD70u, 0x39ECA8u, 0x39ECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ECB0u;
label_39ecb0:
    // 0x39ecb0: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39ecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39ecb4: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x39ecb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x39ecb8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x39ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x39ecbc: 0x24a5ec18  addiu       $a1, $a1, -0x13E8
    ctx->pc = 0x39ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962200));
    // 0x39ecc0: 0x24e7bd90  addiu       $a3, $a3, -0x4270
    ctx->pc = 0x39ecc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950288));
    // 0x39ecc4: 0xc0eb2dc  jal         func_3ACB70
    ctx->pc = 0x39ECC4u;
    SET_GPR_U32(ctx, 31, 0x39ECCCu);
    ctx->pc = 0x39ECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ECC4u;
    // 0x39ecc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACB70u, 0x39ECC4u, 0x39ECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ECCCu;
label_39eccc:
    // 0x39eccc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x39ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x39ecd0: 0xac62ae00  sw          $v0, -0x5200($v1)
    ctx->pc = 0x39ecd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x40AE00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40AE00u, _value); } while (0);
    // 0x39ecd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39ecd8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x39ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_39ecdc:
    // 0x39ecdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39ecdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39ece0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39ece0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x39ece4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39ece4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ece8: 0x3e00008  jr          $ra
    ctx->pc = 0x39ECE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECE8u;
        // 0x39ecec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39ECE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39ECF0u;
}
