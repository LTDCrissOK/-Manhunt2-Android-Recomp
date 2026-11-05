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

// Function: sub_0023E1E8
// Address: 0x23e1e8 - 0x23e298
void sub_0023E1E8_0x23e1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E1E8_0x23e1e8");
#endif

    switch (ctx->pc) {
        case 0x23e214u: goto label_23e214;
        case 0x23e224u: goto label_23e224;
        case 0x23e234u: goto label_23e234;
        case 0x23e244u: goto label_23e244;
        case 0x23e254u: goto label_23e254;
        case 0x23e260u: goto label_23e260;
        case 0x23e26cu: goto label_23e26c;
        case 0x23e288u: goto label_23e288;
        default: break;
    }

    ctx->pc = 0x23e1e8u;

    // 0x23e1e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e1ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23e1f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23e1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23e1f4: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x23E1F4u;
    {
        const bool branch_taken_0x23e1f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1F4u;
        // 0x23e1f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1f4) {
            ctx->pc = 0x23E274u;
            goto label_23e274;
        }
    }
    ctx->pc = 0x23E1FCu;
    // 0x23e1fc: 0x3c015015  lui         $at, 0x5015
    ctx->pc = 0x23e1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20501 << 16));
    // 0x23e200: 0x342102f9  ori         $at, $at, 0x2F9
    ctx->pc = 0x23e200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)761);
    // 0x23e204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e208: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23e208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e20c: 0xc08dc16  jal         func_237058
    ctx->pc = 0x23E20Cu;
    SET_GPR_U32(ctx, 31, 0x23E214u);
    ctx->pc = 0x23E210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E20Cu;
    // 0x23e210: 0xe600037c  swc1        $f0, 0x37C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x23E20Cu, 0x23E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E214u;
label_23e214:
    // 0x23e214: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e218: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x23e218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x23e21c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23E21Cu;
    SET_GPR_U32(ctx, 31, 0x23E224u);
    ctx->pc = 0x23E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E21Cu;
    // 0x23e220: 0x24060551  addiu       $a2, $zero, 0x551 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1361));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23E21Cu, 0x23E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E224u;
label_23e224:
    // 0x23e224: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e228: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x23e228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x23e22c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23E22Cu;
    SET_GPR_U32(ctx, 31, 0x23E234u);
    ctx->pc = 0x23E230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E22Cu;
    // 0x23e230: 0x2406057a  addiu       $a2, $zero, 0x57A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1402));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23E22Cu, 0x23E234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E234u;
label_23e234:
    // 0x23e234: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e238: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x23e238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x23e23c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23E23Cu;
    SET_GPR_U32(ctx, 31, 0x23E244u);
    ctx->pc = 0x23E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E23Cu;
    // 0x23e240: 0x2406059f  addiu       $a2, $zero, 0x59F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1439));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23E23Cu, 0x23E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E244u;
label_23e244:
    // 0x23e244: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e248: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x23e248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x23e24c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23E24Cu;
    SET_GPR_U32(ctx, 31, 0x23E254u);
    ctx->pc = 0x23E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E24Cu;
    // 0x23e250: 0x24060682  addiu       $a2, $zero, 0x682 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1666));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23E24Cu, 0x23E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E254u;
label_23e254:
    // 0x23e254: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e258: 0xc069b36  jal         func_1A6CD8
    ctx->pc = 0x23E258u;
    SET_GPR_U32(ctx, 31, 0x23E260u);
    ctx->pc = 0x23E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E258u;
    // 0x23e25c: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x23E258u, 0x23E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E260u;
label_23e260:
    // 0x23e260: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e264: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x23E264u;
    SET_GPR_U32(ctx, 31, 0x23E26Cu);
    ctx->pc = 0x23E268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E264u;
    // 0x23e268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x23E264u, 0x23E26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E26Cu;
label_23e26c:
    // 0x23e26c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23E26Cu;
    {
        const bool branch_taken_0x23e26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E26Cu;
        // 0x23e270: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e26c) {
            ctx->pc = 0x23E28Cu;
            goto label_23e28c;
        }
    }
    ctx->pc = 0x23E274u;
label_23e274:
    // 0x23e274: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23e274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23e278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e27c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e280: 0xc08f956  jal         func_23E558
    ctx->pc = 0x23E280u;
    SET_GPR_U32(ctx, 31, 0x23E288u);
    ctx->pc = 0x23E284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E280u;
    // 0x23e284: 0xe600037c  swc1        $f0, 0x37C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E558u, 0x23E280u, 0x23E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E288u;
label_23e288:
    // 0x23e288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23e28c:
    // 0x23e28c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23e28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e290: 0x3e00008  jr          $ra
    ctx->pc = 0x23E290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E290u;
        // 0x23e294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E298u;
}
