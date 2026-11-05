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

// Function: sub_003691B0
// Address: 0x3691b0 - 0x369368
void sub_003691B0_0x3691b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003691B0_0x3691b0");
#endif

    switch (ctx->pc) {
        case 0x3691fcu: goto label_3691fc;
        case 0x369240u: goto label_369240;
        case 0x369264u: goto label_369264;
        case 0x36926cu: goto label_36926c;
        case 0x369288u: goto label_369288;
        case 0x369294u: goto label_369294;
        case 0x3692bcu: goto label_3692bc;
        case 0x3692c8u: goto label_3692c8;
        case 0x369310u: goto label_369310;
        case 0x36931cu: goto label_36931c;
        case 0x369330u: goto label_369330;
        case 0x369338u: goto label_369338;
        case 0x369340u: goto label_369340;
        default: break;
    }

    ctx->pc = 0x3691b0u;

    // 0x3691b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3691b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3691b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3691b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3691b8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x3691b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x3691bc: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x3691bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x3691c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3691c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691c4: 0x9043bce0  lbu         $v1, -0x4320($v0)
    ctx->pc = 0x3691c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBCE0u));
    // 0x3691c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3691c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691cc: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x3691ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x3691d0: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x3691d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x3691d4: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x3691d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x3691d8: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x3691d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x3691dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3691DCu;
    {
        const bool branch_taken_0x3691dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3691E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3691DCu;
        // 0x3691e0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3691dc) {
            ctx->pc = 0x3691ECu;
            goto label_3691ec;
        }
    }
    ctx->pc = 0x3691E4u;
    // 0x3691e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3691E4u;
    {
        const bool branch_taken_0x3691e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3691E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3691E4u;
        // 0x3691e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3691e4) {
            ctx->pc = 0x369214u;
            goto label_369214;
        }
    }
    ctx->pc = 0x3691ECu;
label_3691ec:
    // 0x3691ec: 0x50e00005  beql        $a3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3691ECu;
    {
        const bool branch_taken_0x3691ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3691ec) {
            ctx->pc = 0x3691F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3691ECu;
            // 0x3691f0: 0x92020004  lbu         $v0, 0x4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369204u;
            goto label_369204;
        }
    }
    ctx->pc = 0x3691F4u;
    // 0x3691f4: 0xc0c53fe  jal         func_314FF8
    ctx->pc = 0x3691F4u;
    SET_GPR_U32(ctx, 31, 0x3691FCu);
    ctx->pc = 0x3691F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3691F4u;
    // 0x3691f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314FF8u, 0x3691F4u, 0x3691FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691FCu;
label_3691fc:
    // 0x3691fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3691FCu;
    {
        const bool branch_taken_0x3691fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3691FCu;
        // 0x369200: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3691fc) {
            ctx->pc = 0x369214u;
            goto label_369214;
        }
    }
    ctx->pc = 0x369204u;
label_369204:
    // 0x369204: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x369204u;
    {
        const bool branch_taken_0x369204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369204u;
        // 0x369208: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369204) {
            ctx->pc = 0x369210u;
            goto label_369210;
        }
    }
    ctx->pc = 0x36920Cu;
    // 0x36920c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x36920cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_369210:
    // 0x369210: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x369210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_369214:
    // 0x369214: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x369214u;
    {
        const bool branch_taken_0x369214 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x369218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369214u;
        // 0x369218: 0x12a02b  sltu        $s4, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x369214) {
            ctx->pc = 0x369338u;
            goto label_369338;
        }
    }
    ctx->pc = 0x36921Cu;
    // 0x36921c: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x36921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x369220: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x369220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x369224: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x369224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369228: 0x2444f8c8  addiu       $a0, $v0, -0x738
    ctx->pc = 0x369228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
    // 0x36922c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36922cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369230: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x369230u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x369234: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x369234u;
    {
        const bool branch_taken_0x369234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x369238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369234u;
        // 0x369238: 0x8e260018  lw          $a2, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369234) {
            ctx->pc = 0x369258u;
            goto label_369258;
        }
    }
    ctx->pc = 0x36923Cu;
    // 0x36923c: 0x0  nop
    ctx->pc = 0x36923cu;
    // NOP
label_369240:
    // 0x369240: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x369240u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x369244: 0x0  nop
    ctx->pc = 0x369244u;
    // NOP
    // 0x369248: 0x0  nop
    ctx->pc = 0x369248u;
    // NOP
    // 0x36924c: 0x0  nop
    ctx->pc = 0x36924cu;
    // NOP
    // 0x369250: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x369250u;
    {
        const bool branch_taken_0x369250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369250u;
        // 0x369254: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369250) {
            ctx->pc = 0x369240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369240;
        }
    }
    ctx->pc = 0x369258u;
label_369258:
    // 0x369258: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x369258u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x36925c: 0xc0dc200  jal         func_370800
    ctx->pc = 0x36925Cu;
    SET_GPR_U32(ctx, 31, 0x369264u);
    ctx->pc = 0x369260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36925Cu;
    // 0x369260: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370800u, 0x36925Cu, 0x369264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369264u;
label_369264:
    // 0x369264: 0xc0c5424  jal         func_315090
    ctx->pc = 0x369264u;
    SET_GPR_U32(ctx, 31, 0x36926Cu);
    ctx->pc = 0x369268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369264u;
    // 0x369268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315090u, 0x369264u, 0x36926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36926Cu;
label_36926c:
    // 0x36926c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36926cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369270: 0x5200002c  beql        $s0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x369270u;
    {
        const bool branch_taken_0x369270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x369270) {
            ctx->pc = 0x369274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369270u;
            // 0x369274: 0xc62d0014  lwc1        $f13, 0x14($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x369324u;
            goto label_369324;
        }
    }
    ctx->pc = 0x369278u;
    // 0x369278: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x369278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36927c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x36927cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x369280: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x369280u;
    SET_GPR_U32(ctx, 31, 0x369288u);
    ctx->pc = 0x369284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369280u;
    // 0x369284: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x369280u, 0x369288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369288u;
label_369288:
    // 0x369288: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x369288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36928c: 0xc0c9b42  jal         func_326D08
    ctx->pc = 0x36928Cu;
    SET_GPR_U32(ctx, 31, 0x369294u);
    ctx->pc = 0x369290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36928Cu;
    // 0x369290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326D08u, 0x36928Cu, 0x369294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369294u;
label_369294:
    // 0x369294: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x369294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369298: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x369298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36929c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x36929cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3692a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3692a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3692a4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3692a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3692a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3692a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3692ac: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x3692acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3692b0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x3692b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3692b4: 0xc0b1534  jal         func_2C54D0
    ctx->pc = 0x3692B4u;
    SET_GPR_U32(ctx, 31, 0x3692BCu);
    ctx->pc = 0x3692B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3692B4u;
    // 0x3692b8: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C54D0u, 0x3692B4u, 0x3692BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3692BCu;
label_3692bc:
    // 0x3692bc: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x3692bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3692c0: 0xc0df4be  jal         func_37D2F8
    ctx->pc = 0x3692C0u;
    SET_GPR_U32(ctx, 31, 0x3692C8u);
    ctx->pc = 0x3692C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3692C0u;
    // 0x3692c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D2F8u, 0x3692C0u, 0x3692C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3692C8u;
label_3692c8:
    // 0x3692c8: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x3692c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3692cc: 0x2664f8c8  addiu       $a0, $s3, -0x738
    ctx->pc = 0x3692ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965448));
    // 0x3692d0: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x3692d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3692d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3692d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3692d8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3692d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3692dc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3692dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3692e0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x3692e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3692e4: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x3692e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3692e8: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x3692e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3692ec: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x3692ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3692f0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3692f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3692f4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x3692f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3692f8: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x3692f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3692fc: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x3692fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x369300: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x369300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x369304: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x369304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x369308: 0xc0dc1a4  jal         func_370690
    ctx->pc = 0x369308u;
    SET_GPR_U32(ctx, 31, 0x369310u);
    ctx->pc = 0x36930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369308u;
    // 0x36930c: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370690u, 0x369308u, 0x369310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369310u;
label_369310:
    // 0x369310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x369310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369314: 0xc0df4cc  jal         func_37D330
    ctx->pc = 0x369314u;
    SET_GPR_U32(ctx, 31, 0x36931Cu);
    ctx->pc = 0x369318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369314u;
    // 0x369318: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D330u, 0x369314u, 0x36931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36931Cu;
label_36931c:
    // 0x36931c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36931Cu;
    {
        const bool branch_taken_0x36931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36931c) {
            ctx->pc = 0x369330u;
            goto label_369330;
        }
    }
    ctx->pc = 0x369324u;
label_369324:
    // 0x369324: 0x2664f8c8  addiu       $a0, $s3, -0x738
    ctx->pc = 0x369324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965448));
    // 0x369328: 0xc0dc1ba  jal         func_3706E8
    ctx->pc = 0x369328u;
    SET_GPR_U32(ctx, 31, 0x369330u);
    ctx->pc = 0x36932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369328u;
    // 0x36932c: 0xc62c0010  lwc1        $f12, 0x10($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3706E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3706E8u, 0x369328u, 0x369330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369330u;
label_369330:
    // 0x369330: 0xc0c7b26  jal         func_31EC98
    ctx->pc = 0x369330u;
    SET_GPR_U32(ctx, 31, 0x369338u);
    ctx->pc = 0x369334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369330u;
    // 0x369334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC98u, 0x369330u, 0x369338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369338u;
label_369338:
    // 0x369338: 0xc0db386  jal         func_36CE18
    ctx->pc = 0x369338u;
    SET_GPR_U32(ctx, 31, 0x369340u);
    ctx->pc = 0x36933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369338u;
    // 0x36933c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE18u, 0x369338u, 0x369340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369340u;
label_369340:
    // 0x369340: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x369340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x369344: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x369344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x369348: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x369348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36934c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x36934cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x369350: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x369350u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x369354: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x369354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x369358: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x369358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36935c: 0x3e00008  jr          $ra
    ctx->pc = 0x36935Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36935Cu;
        // 0x369360: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36935Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369364u;
    // 0x369364: 0x0  nop
    ctx->pc = 0x369364u;
    // NOP
    ctx->pc = 0x369368u;
}
