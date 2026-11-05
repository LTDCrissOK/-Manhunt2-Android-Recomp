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

// Function: sub_00253C18
// Address: 0x253c18 - 0x253cd0
void sub_00253C18_0x253c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253C18_0x253c18");
#endif

    switch (ctx->pc) {
        case 0x253c54u: goto label_253c54;
        case 0x253c60u: goto label_253c60;
        case 0x253c84u: goto label_253c84;
        case 0x253c90u: goto label_253c90;
        case 0x253c9cu: goto label_253c9c;
        case 0x253ca4u: goto label_253ca4;
        case 0x253cacu: goto label_253cac;
        default: break;
    }

    ctx->pc = 0x253c18u;

    // 0x253c18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253c1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x253c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x253c20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x253c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x253c24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x253c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253c2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x253c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x253c30: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x253c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x253c34: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x253c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x253c38: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x253C38u;
    {
        const bool branch_taken_0x253c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C38u;
        // 0x253c3c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c38) {
            ctx->pc = 0x253CB4u;
            goto label_253cb4;
        }
    }
    ctx->pc = 0x253C40u;
    // 0x253c40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253c44: 0x8e240fec  lw          $a0, 0xFEC($s1)
    ctx->pc = 0x253c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4076)));
    // 0x253c48: 0xae221060  sw          $v0, 0x1060($s1)
    ctx->pc = 0x253c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4192), GPR_U32(ctx, 2));
    // 0x253c4c: 0xc06ee30  jal         func_1BB8C0
    ctx->pc = 0x253C4Cu;
    SET_GPR_U32(ctx, 31, 0x253C54u);
    ctx->pc = 0x253C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C4Cu;
    // 0x253c50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8C0u, 0x253C4Cu, 0x253C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C54u;
label_253c54:
    // 0x253c54: 0x8e240fec  lw          $a0, 0xFEC($s1)
    ctx->pc = 0x253c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4076)));
    // 0x253c58: 0xc06eebe  jal         func_1BBAF8
    ctx->pc = 0x253C58u;
    SET_GPR_U32(ctx, 31, 0x253C60u);
    ctx->pc = 0x253C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C58u;
    // 0x253c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x253C58u, 0x253C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C60u;
label_253c60:
    // 0x253c60: 0x8e230fec  lw          $v1, 0xFEC($s1)
    ctx->pc = 0x253c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4076)));
    // 0x253c64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x253c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253c68: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x253c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x253c6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253c70: 0x0  nop
    ctx->pc = 0x253c70u;
    // NOP
    // 0x253c74: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x253c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x253c78: 0x8e220fe8  lw          $v0, 0xFE8($s1)
    ctx->pc = 0x253c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
    // 0x253c7c: 0xc041138  jal         func_1044E0
    ctx->pc = 0x253C7Cu;
    SET_GPR_U32(ctx, 31, 0x253C84u);
    ctx->pc = 0x253C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C7Cu;
    // 0x253c80: 0xac44035c  sw          $a0, 0x35C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044E0u, 0x253C7Cu, 0x253C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C84u;
label_253c84:
    // 0x253c84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c88: 0xc041134  jal         func_1044D0
    ctx->pc = 0x253C88u;
    SET_GPR_U32(ctx, 31, 0x253C90u);
    ctx->pc = 0x253C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C88u;
    // 0x253c8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044D0u, 0x253C88u, 0x253C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C90u;
label_253c90:
    // 0x253c90: 0x8e240fe4  lw          $a0, 0xFE4($s1)
    ctx->pc = 0x253c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4068)));
    // 0x253c94: 0xc061e5e  jal         func_187978
    ctx->pc = 0x253C94u;
    SET_GPR_U32(ctx, 31, 0x253C9Cu);
    ctx->pc = 0x253C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C94u;
    // 0x253c98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187978u, 0x253C94u, 0x253C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C9Cu;
label_253c9c:
    // 0x253c9c: 0xc041134  jal         func_1044D0
    ctx->pc = 0x253C9Cu;
    SET_GPR_U32(ctx, 31, 0x253CA4u);
    ctx->pc = 0x253CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C9Cu;
    // 0x253ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044D0u, 0x253C9Cu, 0x253CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CA4u;
label_253ca4:
    // 0x253ca4: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x253CA4u;
    SET_GPR_U32(ctx, 31, 0x253CACu);
    ctx->pc = 0x253CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CA4u;
    // 0x253ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x253CA4u, 0x253CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CACu;
label_253cac:
    // 0x253cac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x253CACu;
    {
        const bool branch_taken_0x253cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CACu;
        // 0x253cb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cac) {
            ctx->pc = 0x253CB8u;
            goto label_253cb8;
        }
    }
    ctx->pc = 0x253CB4u;
label_253cb4:
    // 0x253cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x253cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253cb8:
    // 0x253cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253cbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253cc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x253cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253cc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x253cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x253CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CC8u;
        // 0x253ccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253CD0u;
}
