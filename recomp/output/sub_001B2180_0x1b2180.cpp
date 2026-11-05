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

// Function: sub_001B2180
// Address: 0x1b2180 - 0x1b2290
void sub_001B2180_0x1b2180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2180_0x1b2180");
#endif

    switch (ctx->pc) {
        case 0x1b21a8u: goto label_1b21a8;
        case 0x1b21dcu: goto label_1b21dc;
        case 0x1b21f0u: goto label_1b21f0;
        case 0x1b2204u: goto label_1b2204;
        case 0x1b2234u: goto label_1b2234;
        case 0x1b224cu: goto label_1b224c;
        default: break;
    }

    ctx->pc = 0x1b2180u;

    // 0x1b2180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2184: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b218c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b218cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2194: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b2194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b2198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b219c: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1b219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1b21a0: 0xc06c6a2  jal         func_1B1A88
    ctx->pc = 0x1B21A0u;
    SET_GPR_U32(ctx, 31, 0x1B21A8u);
    ctx->pc = 0x1B21A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21A0u;
    // 0x1b21a4: 0x8c530110  lw          $s3, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A88u, 0x1B21A0u, 0x1B21A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21A8u;
label_1b21a8:
    // 0x1b21a8: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x1b21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1b21ac: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B21ACu;
    {
        const bool branch_taken_0x1b21ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21ACu;
        // 0x1b21b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21ac) {
            ctx->pc = 0x1B2278u;
            goto label_1b2278;
        }
    }
    ctx->pc = 0x1B21B4u;
    // 0x1b21b4: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1b21b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b21b8: 0x94a2002a  lhu         $v0, 0x2A($a1)
    ctx->pc = 0x1b21b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1b21bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b21bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b21c0: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B21C0u;
    {
        const bool branch_taken_0x1b21c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b21c0) {
            ctx->pc = 0x1B21C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B21C0u;
            // 0x1b21c4: 0x8e4200a0  lw          $v0, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2250u;
            goto label_1b2250;
        }
    }
    ctx->pc = 0x1B21C8u;
    // 0x1b21c8: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x1b21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x1b21cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B21CCu;
    {
        const bool branch_taken_0x1b21cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B21D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21CCu;
        // 0x1b21d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21cc) {
            ctx->pc = 0x1B21F8u;
            goto label_1b21f8;
        }
    }
    ctx->pc = 0x1B21D4u;
    // 0x1b21d4: 0xc07577c  jal         func_1D5DF0
    ctx->pc = 0x1B21D4u;
    SET_GPR_U32(ctx, 31, 0x1B21DCu);
    ctx->pc = 0x1B21D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21D4u;
    // 0x1b21d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DF0u, 0x1B21D4u, 0x1B21DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21DCu;
label_1b21dc:
    // 0x1b21dc: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1b21dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b21e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b21e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b21e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b21e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b21e8: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1B21E8u;
    SET_GPR_U32(ctx, 31, 0x1B21F0u);
    ctx->pc = 0x1B21ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21E8u;
    // 0x1b21ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1B21E8u, 0x1B21F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21F0u;
label_1b21f0:
    // 0x1b21f0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B21F0u;
    {
        const bool branch_taken_0x1b21f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21F0u;
        // 0x1b21f4: 0xae4000b0  sw          $zero, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21f0) {
            ctx->pc = 0x1B224Cu;
            goto label_1b224c;
        }
    }
    ctx->pc = 0x1B21F8u;
label_1b21f8:
    // 0x1b21f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b21f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b21fc: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1B21FCu;
    SET_GPR_U32(ctx, 31, 0x1B2204u);
    ctx->pc = 0x1B2200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21FCu;
    // 0x1b2200: 0x24110018  addiu       $s1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1B21FCu, 0x1B2204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2204u;
label_1b2204:
    // 0x1b2204: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b2204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b2208: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1b2208u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1b220c: 0x26108658  addiu       $s0, $s0, -0x79A8
    ctx->pc = 0x1b220cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x1b2210: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2214: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b2214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b2218: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1b2218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b221c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b221cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1b2220: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1b2220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b2224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b2224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2228: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b2228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b222c: 0xc075752  jal         func_1D5D48
    ctx->pc = 0x1B222Cu;
    SET_GPR_U32(ctx, 31, 0x1B2234u);
    ctx->pc = 0x1B2230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B222Cu;
    // 0x1b2230: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D48u, 0x1B222Cu, 0x1B2234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2234u;
label_1b2234:
    // 0x1b2234: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b2234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b2238: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b223c: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x1b223cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b2240: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1b2240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b2244: 0xc06c680  jal         func_1B1A00
    ctx->pc = 0x1B2244u;
    SET_GPR_U32(ctx, 31, 0x1B224Cu);
    ctx->pc = 0x1B2248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2244u;
    // 0x1b2248: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A00u, 0x1B2244u, 0x1B224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B224Cu;
label_1b224c:
    // 0x1b224c: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x1b224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1b2250:
    // 0x1b2250: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1b2250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1b2254: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1b2254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1b2258: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b225c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2260: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2264: 0x0  nop
    ctx->pc = 0x1b2264u;
    // NOP
    // 0x1b2268: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2268u;
    {
        const bool branch_taken_0x1b2268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2268u;
        // 0x1b226c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2268) {
            ctx->pc = 0x1B2274u;
            goto label_1b2274;
        }
    }
    ctx->pc = 0x1B2270u;
    // 0x1b2270: 0xae420098  sw          $v0, 0x98($s2)
    ctx->pc = 0x1b2270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
label_1b2274:
    // 0x1b2274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2278:
    // 0x1b2278: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b227c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b227cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2280: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2280u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2284: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b2284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2288: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2288u;
        // 0x1b228c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2290u;
}
