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

// Function: sub_0029A0F8
// Address: 0x29a0f8 - 0x29a168
void sub_0029A0F8_0x29a0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A0F8_0x29a0f8");
#endif

    switch (ctx->pc) {
        case 0x29a0f8u: goto label_29a0f8;
        case 0x29a0fcu: goto label_29a0fc;
        case 0x29a100u: goto label_29a100;
        case 0x29a104u: goto label_29a104;
        case 0x29a108u: goto label_29a108;
        case 0x29a10cu: goto label_29a10c;
        case 0x29a110u: goto label_29a110;
        case 0x29a114u: goto label_29a114;
        case 0x29a118u: goto label_29a118;
        case 0x29a11cu: goto label_29a11c;
        case 0x29a120u: goto label_29a120;
        case 0x29a124u: goto label_29a124;
        case 0x29a128u: goto label_29a128;
        case 0x29a12cu: goto label_29a12c;
        case 0x29a130u: goto label_29a130;
        case 0x29a134u: goto label_29a134;
        case 0x29a138u: goto label_29a138;
        case 0x29a13cu: goto label_29a13c;
        case 0x29a140u: goto label_29a140;
        case 0x29a144u: goto label_29a144;
        case 0x29a148u: goto label_29a148;
        case 0x29a14cu: goto label_29a14c;
        case 0x29a150u: goto label_29a150;
        case 0x29a154u: goto label_29a154;
        case 0x29a158u: goto label_29a158;
        case 0x29a15cu: goto label_29a15c;
        case 0x29a160u: goto label_29a160;
        case 0x29a164u: goto label_29a164;
        default: break;
    }

    ctx->pc = 0x29a0f8u;

label_29a0f8:
    // 0x29a0f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29a0fc:
    // 0x29a0fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29a100:
    // 0x29a100: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29a100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29a104:
    // 0x29a104: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29a108:
    // 0x29a108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29a10c:
    // 0x29a10c: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x29a10cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_29a110:
    // 0x29a110: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x29a110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_29a114:
    // 0x29a114: 0x8e07007c  lw          $a3, 0x7C($s0)
    ctx->pc = 0x29a114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_29a118:
    // 0x29a118: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x29a118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_29a11c:
    // 0x29a11c: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x29a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_29a120:
    // 0x29a120: 0x8c46fffc  lw          $a2, -0x4($v0)
    ctx->pc = 0x29a120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_29a124:
    // 0x29a124: 0x2484ff88  addiu       $a0, $a0, -0x78
    ctx->pc = 0x29a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967176));
label_29a128:
    // 0x29a128: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x29a128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_29a12c:
    // 0x29a12c: 0x60f809  jalr        $v1
label_29a130:
    if (ctx->pc == 0x29A130u) {
        ctx->pc = 0x29A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A12Cu;
        // 0x29a130: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A134u;
        goto label_29a134;
    }
    ctx->pc = 0x29A12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29A134u);
        ctx->pc = 0x29A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A12Cu;
        // 0x29a130: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A12Cu, 0x29A134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A134u;
label_29a134:
    // 0x29a134: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x29a134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_29a138:
    // 0x29a138: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x29a138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_29a13c:
    // 0x29a13c: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x29a13cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29a140:
    // 0x29a140: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x29a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29a144:
    // 0x29a144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a148:
    // 0x29a148: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29a148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29a14c:
    // 0x29a14c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29a150:
    // 0x29a150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29a154:
    // 0x29a154: 0xc441ffa0  lwc1        $f1, -0x60($v0)
    ctx->pc = 0x29a154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29a158:
    // 0x29a158: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x29a158u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_29a15c:
    // 0x29a15c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a15cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29a160:
    // 0x29a160: 0x3e00008  jr          $ra
label_29a164:
    if (ctx->pc == 0x29A164u) {
        ctx->pc = 0x29A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A160u;
        // 0x29a164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A168u;
        goto label_fallthrough_0x29a160;
    }
    ctx->pc = 0x29A160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A160u;
        // 0x29a164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29a160:
    ctx->pc = 0x29A168u;
}
