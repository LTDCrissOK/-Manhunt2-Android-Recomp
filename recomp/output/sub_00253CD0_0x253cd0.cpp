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

// Function: sub_00253CD0
// Address: 0x253cd0 - 0x253d70
void sub_00253CD0_0x253cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253CD0_0x253cd0");
#endif

    switch (ctx->pc) {
        case 0x253d08u: goto label_253d08;
        case 0x253d14u: goto label_253d14;
        case 0x253d3cu: goto label_253d3c;
        case 0x253d48u: goto label_253d48;
        case 0x253d50u: goto label_253d50;
        default: break;
    }

    ctx->pc = 0x253cd0u;

    // 0x253cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253cd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x253cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x253cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ce0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253ce4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x253ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x253ce8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x253ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x253cec: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x253CECu;
    {
        const bool branch_taken_0x253cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CECu;
        // 0x253cf0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cec) {
            ctx->pc = 0x253D58u;
            goto label_253d58;
        }
    }
    ctx->pc = 0x253CF4u;
    // 0x253cf4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x253cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x253cf8: 0x8e040fec  lw          $a0, 0xFEC($s0)
    ctx->pc = 0x253cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
    // 0x253cfc: 0xae021060  sw          $v0, 0x1060($s0)
    ctx->pc = 0x253cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    // 0x253d00: 0xc06ee30  jal         func_1BB8C0
    ctx->pc = 0x253D00u;
    SET_GPR_U32(ctx, 31, 0x253D08u);
    ctx->pc = 0x253D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D00u;
    // 0x253d04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8C0u, 0x253D00u, 0x253D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D08u;
label_253d08:
    // 0x253d08: 0x8e040fec  lw          $a0, 0xFEC($s0)
    ctx->pc = 0x253d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
    // 0x253d0c: 0xc06eebe  jal         func_1BBAF8
    ctx->pc = 0x253D0Cu;
    SET_GPR_U32(ctx, 31, 0x253D14u);
    ctx->pc = 0x253D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D0Cu;
    // 0x253d10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x253D0Cu, 0x253D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D14u;
label_253d14:
    // 0x253d14: 0x8e030fec  lw          $v1, 0xFEC($s0)
    ctx->pc = 0x253d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
    // 0x253d18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x253d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253d1c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x253d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x253d20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253d24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x253d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d2c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x253d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x253d30: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x253d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x253d34: 0xc0944da  jal         func_251368
    ctx->pc = 0x253D34u;
    SET_GPR_U32(ctx, 31, 0x253D3Cu);
    ctx->pc = 0x253D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D34u;
    // 0x253d38: 0xac46035c  sw          $a2, 0x35C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x253D34u, 0x253D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D3Cu;
label_253d3c:
    // 0x253d3c: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x253d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    // 0x253d40: 0xc061e5e  jal         func_187978
    ctx->pc = 0x253D40u;
    SET_GPR_U32(ctx, 31, 0x253D48u);
    ctx->pc = 0x253D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D40u;
    // 0x253d44: 0x8e051004  lw          $a1, 0x1004($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187978u, 0x253D40u, 0x253D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D48u;
label_253d48:
    // 0x253d48: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x253D48u;
    SET_GPR_U32(ctx, 31, 0x253D50u);
    ctx->pc = 0x253D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D48u;
    // 0x253d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x253D48u, 0x253D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D50u;
label_253d50:
    // 0x253d50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x253D50u;
    {
        const bool branch_taken_0x253d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D50u;
        // 0x253d54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d50) {
            ctx->pc = 0x253D5Cu;
            goto label_253d5c;
        }
    }
    ctx->pc = 0x253D58u;
label_253d58:
    // 0x253d58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x253d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253d5c:
    // 0x253d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253d60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x253d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253d68: 0x3e00008  jr          $ra
    ctx->pc = 0x253D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D68u;
        // 0x253d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253D70u;
}
