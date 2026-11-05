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

// Function: sub_00235E38
// Address: 0x235e38 - 0x235ed0
void sub_00235E38_0x235e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235E38_0x235e38");
#endif

    switch (ctx->pc) {
        case 0x235e5cu: goto label_235e5c;
        case 0x235e68u: goto label_235e68;
        case 0x235e78u: goto label_235e78;
        case 0x235e9cu: goto label_235e9c;
        case 0x235ea4u: goto label_235ea4;
        default: break;
    }

    ctx->pc = 0x235e38u;

    // 0x235e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x235e3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x235e40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235e44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x235e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235e4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x235e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x235e54: 0xc08e528  jal         func_2394A0
    ctx->pc = 0x235E54u;
    SET_GPR_U32(ctx, 31, 0x235E5Cu);
    ctx->pc = 0x235E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E54u;
    // 0x235e58: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x235E54u, 0x235E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E5Cu;
label_235e5c:
    // 0x235e5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x235e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e60: 0xc08e3b2  jal         func_238EC8
    ctx->pc = 0x235E60u;
    SET_GPR_U32(ctx, 31, 0x235E68u);
    ctx->pc = 0x235E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E60u;
    // 0x235e64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x235E60u, 0x235E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E68u;
label_235e68:
    // 0x235e68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x235e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e70: 0xc0848ca  jal         func_212328
    ctx->pc = 0x235E70u;
    SET_GPR_U32(ctx, 31, 0x235E78u);
    ctx->pc = 0x235E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E70u;
    // 0x235e74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212328u, 0x235E70u, 0x235E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E78u;
label_235e78:
    // 0x235e78: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x235e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x235e7c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x235E7Cu;
    {
        const bool branch_taken_0x235e7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x235e7c) {
            ctx->pc = 0x235E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235E7Cu;
            // 0x235e80: 0x8e42010c  lw          $v0, 0x10C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235EA8u;
            goto label_235ea8;
        }
    }
    ctx->pc = 0x235E84u;
    // 0x235e84: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x235e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x235e88: 0x8e42048c  lw          $v0, 0x48C($s2)
    ctx->pc = 0x235e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
    // 0x235e8c: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x235E8Cu;
    {
        const bool branch_taken_0x235e8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x235e8c) {
            ctx->pc = 0x235E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235E8Cu;
            // 0x235e90: 0x8e42010c  lw          $v0, 0x10C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235EA8u;
            goto label_235ea8;
        }
    }
    ctx->pc = 0x235E94u;
    // 0x235e94: 0xc076508  jal         func_1D9420
    ctx->pc = 0x235E94u;
    SET_GPR_U32(ctx, 31, 0x235E9Cu);
    ctx->pc = 0x1D9420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9420u, 0x235E94u, 0x235E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E9Cu;
label_235e9c:
    // 0x235e9c: 0xc0843ea  jal         func_210FA8
    ctx->pc = 0x235E9Cu;
    SET_GPR_U32(ctx, 31, 0x235EA4u);
    ctx->pc = 0x235EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E9Cu;
    // 0x235ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FA8u, 0x235E9Cu, 0x235EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235EA4u;
label_235ea4:
    // 0x235ea4: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x235ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_235ea8:
    // 0x235ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235eac: 0xac4000c4  sw          $zero, 0xC4($v0)
    ctx->pc = 0x235eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
    // 0x235eb0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x235eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x235eb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235eb8: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x235eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235ebc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235ebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235ec0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x235ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235ec4: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x235ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x235ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x235EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EC8u;
        // 0x235ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235ED0u;
}
