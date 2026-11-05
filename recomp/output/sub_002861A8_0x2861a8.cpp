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

// Function: sub_002861A8
// Address: 0x2861a8 - 0x286280
void sub_002861A8_0x2861a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002861A8_0x2861a8");
#endif

    switch (ctx->pc) {
        case 0x2861b8u: goto label_2861b8;
        case 0x286260u: goto label_286260;
        case 0x286268u: goto label_286268;
        case 0x286270u: goto label_286270;
        default: break;
    }

    ctx->pc = 0x2861a8u;

    // 0x2861a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2861a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2861ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2861acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2861b0: 0xc0a2240  jal         func_288900
    ctx->pc = 0x2861B0u;
    SET_GPR_U32(ctx, 31, 0x2861B8u);
    ctx->pc = 0x288900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288900u, 0x2861B0u, 0x2861B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2861B8u;
label_2861b8:
    // 0x2861b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2861b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2861bc: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x2861bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x2861c0: 0xc441ac6c  lwc1        $f1, -0x5394($v0)
    ctx->pc = 0x2861c0u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2861c4: 0x3c0c006c  lui         $t4, 0x6C
    ctx->pc = 0x2861c4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)108 << 16));
    // 0x2861c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2861c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2861cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2861ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2861d0: 0x2502c608  addiu       $v0, $t0, -0x39F8
    ctx->pc = 0x2861d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952456));
    // 0x2861d4: 0x2585c640  addiu       $a1, $t4, -0x39C0
    ctx->pc = 0x2861d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 4294952512));
    // 0x2861d8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2861d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2861dc: 0xe4420034  swc1        $f2, 0x34($v0)
    ctx->pc = 0x2861dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC63Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC63Cu, _value); } while (0); }
    // 0x2861e0: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x2861e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x2861e4: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x2861e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BC64Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC64Cu, _value); } while (0);
    // 0x2861e8: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2861e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2861ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2861ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2861f0: 0xace0a320  sw          $zero, -0x5CE0($a3)
    ctx->pc = 0x2861f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2861f4: 0xacc32bf0  sw          $v1, 0x2BF0($a2)
    ctx->pc = 0x2861f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x482BF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482BF0u, _value); } while (0);
    // 0x2861f8: 0x24e9a320  addiu       $t1, $a3, -0x5CE0
    ctx->pc = 0x2861f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943520));
    // 0x2861fc: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x2861fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A328u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A328u, _value); } while (0);
    // 0x286200: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x286200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286204: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x286204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x286208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x286208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28620c: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x28620cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286210: 0xad00c608  sw          $zero, -0x39F8($t0)
    ctx->pc = 0x286210u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC608u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC608u, _value); } while (0);
    // 0x286214: 0x24cb2bf0  addiu       $t3, $a2, 0x2BF0
    ctx->pc = 0x286214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 11248));
    // 0x286218: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x286218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC620u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC620u, _value); } while (0); }
    // 0x28621c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x28621cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC624u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC624u, _value); } while (0); }
    // 0x286220: 0xac4a0020  sw          $t2, 0x20($v0)
    ctx->pc = 0x286220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6BC628u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC628u, _value); } while (0);
    // 0x286224: 0xad80c640  sw          $zero, -0x39C0($t4)
    ctx->pc = 0x286224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC640u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC640u, _value); } while (0);
    // 0x286228: 0xacad0004  sw          $t5, 0x4($a1)
    ctx->pc = 0x286228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x6BC644u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC644u, _value); } while (0);
    // 0x28622c: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x28622cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482BF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482BF4u, _value); } while (0);
    // 0x286230: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x286230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A324u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A324u, _value); } while (0);
    // 0x286234: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x286234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC60Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC60Cu, _value); } while (0);
    // 0x286238: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x286238u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC610u, _value); } while (0);
    // 0x28623c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x28623cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC614u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC614u, _value); } while (0);
    // 0x286240: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x286240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC618u, _value); } while (0); }
    // 0x286244: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x286244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC61Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC61Cu, _value); } while (0); }
    // 0x286248: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x286248u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC62Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC62Cu, _value); } while (0);
    // 0x28624c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x28624cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC630u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC630u, _value); } while (0);
    // 0x286250: 0xe442002c  swc1        $f2, 0x2C($v0)
    ctx->pc = 0x286250u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC634u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC634u, _value); } while (0); }
    // 0x286254: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x286254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC638u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC638u, _value); } while (0);
    // 0x286258: 0xc0a18a0  jal         func_286280
    ctx->pc = 0x286258u;
    SET_GPR_U32(ctx, 31, 0x286260u);
    ctx->pc = 0x28625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286258u;
    // 0x28625c: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286280u, 0x286258u, 0x286260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286260u;
label_286260:
    // 0x286260: 0xc0a18ae  jal         func_2862B8
    ctx->pc = 0x286260u;
    SET_GPR_U32(ctx, 31, 0x286268u);
    ctx->pc = 0x2862B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2862B8u, 0x286260u, 0x286268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286268u;
label_286268:
    // 0x286268: 0xc0a18a8  jal         func_2862A0
    ctx->pc = 0x286268u;
    SET_GPR_U32(ctx, 31, 0x286270u);
    ctx->pc = 0x2862A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2862A0u, 0x286268u, 0x286270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286270u;
label_286270:
    // 0x286270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x286270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286274: 0x3e00008  jr          $ra
    ctx->pc = 0x286274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286274u;
        // 0x286278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28627Cu;
    // 0x28627c: 0x0  nop
    ctx->pc = 0x28627cu;
    // NOP
    ctx->pc = 0x286280u;
}
