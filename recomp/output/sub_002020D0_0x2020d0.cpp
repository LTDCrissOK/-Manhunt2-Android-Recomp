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

// Function: sub_002020D0
// Address: 0x2020d0 - 0x2023b0
void sub_002020D0_0x2020d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002020D0_0x2020d0");
#endif

    switch (ctx->pc) {
        case 0x202114u: goto label_202114;
        case 0x202120u: goto label_202120;
        case 0x202130u: goto label_202130;
        case 0x202138u: goto label_202138;
        case 0x202140u: goto label_202140;
        case 0x202148u: goto label_202148;
        case 0x202150u: goto label_202150;
        case 0x202158u: goto label_202158;
        case 0x202160u: goto label_202160;
        case 0x202170u: goto label_202170;
        case 0x202190u: goto label_202190;
        case 0x2021c8u: goto label_2021c8;
        case 0x20220cu: goto label_20220c;
        case 0x20221cu: goto label_20221c;
        case 0x202230u: goto label_202230;
        case 0x20223cu: goto label_20223c;
        case 0x202248u: goto label_202248;
        case 0x20225cu: goto label_20225c;
        case 0x20226cu: goto label_20226c;
        case 0x202280u: goto label_202280;
        case 0x20228cu: goto label_20228c;
        case 0x202298u: goto label_202298;
        case 0x2022a0u: goto label_2022a0;
        case 0x2022a8u: goto label_2022a8;
        case 0x2022b8u: goto label_2022b8;
        case 0x2022c0u: goto label_2022c0;
        case 0x2022c8u: goto label_2022c8;
        case 0x2022d0u: goto label_2022d0;
        case 0x2022dcu: goto label_2022dc;
        case 0x2022f0u: goto label_2022f0;
        case 0x2022fcu: goto label_2022fc;
        case 0x202308u: goto label_202308;
        case 0x202328u: goto label_202328;
        case 0x202340u: goto label_202340;
        default: break;
    }

    ctx->pc = 0x2020d0u;

    // 0x2020d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2020d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2020d4: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2020d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2020d8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2020d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2020dc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2020dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2020e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2020e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020e4: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2020e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2020e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2020e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020ec: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2020ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2020f0: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2020f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x2020f4: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2020f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2020f8: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2020f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2020fc: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2020fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x202100: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x202100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x202104: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x202104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x202108: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x202108u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x20210c: 0xc0ee82c  jal         func_3BA0B0
    ctx->pc = 0x20210Cu;
    SET_GPR_U32(ctx, 31, 0x202114u);
    ctx->pc = 0x202110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20210Cu;
    // 0x202110: 0xa2420002  sb          $v0, 0x2($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA0B0u, 0x20210Cu, 0x202114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202114u;
label_202114:
    // 0x202114: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x202114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x202118: 0xc0825de  jal         func_209778
    ctx->pc = 0x202118u;
    SET_GPR_U32(ctx, 31, 0x202120u);
    ctx->pc = 0x20211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202118u;
    // 0x20211c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209778u, 0x202118u, 0x202120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202120u;
label_202120:
    // 0x202120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202124: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202128: 0xc0825fe  jal         func_2097F8
    ctx->pc = 0x202128u;
    SET_GPR_U32(ctx, 31, 0x202130u);
    ctx->pc = 0x20212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202128u;
    // 0x20212c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2097F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2097F8u, 0x202128u, 0x202130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202130u;
label_202130:
    // 0x202130: 0xc08261e  jal         func_209878
    ctx->pc = 0x202130u;
    SET_GPR_U32(ctx, 31, 0x202138u);
    ctx->pc = 0x209878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209878u, 0x202130u, 0x202138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202138u;
label_202138:
    // 0x202138: 0xc0827da  jal         func_209F68
    ctx->pc = 0x202138u;
    SET_GPR_U32(ctx, 31, 0x202140u);
    ctx->pc = 0x20213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202138u;
    // 0x20213c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209F68u, 0x202138u, 0x202140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202140u;
label_202140:
    // 0x202140: 0xc0827e6  jal         func_209F98
    ctx->pc = 0x202140u;
    SET_GPR_U32(ctx, 31, 0x202148u);
    ctx->pc = 0x202144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202140u;
    // 0x202144: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209F98u, 0x202140u, 0x202148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202148u;
label_202148:
    // 0x202148: 0xc082752  jal         func_209D48
    ctx->pc = 0x202148u;
    SET_GPR_U32(ctx, 31, 0x202150u);
    ctx->pc = 0x20214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202148u;
    // 0x20214c: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209D48u, 0x202148u, 0x202150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202150u;
label_202150:
    // 0x202150: 0xc08275c  jal         func_209D70
    ctx->pc = 0x202150u;
    SET_GPR_U32(ctx, 31, 0x202158u);
    ctx->pc = 0x202154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202150u;
    // 0x202154: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209D70u, 0x202150u, 0x202158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202158u;
label_202158:
    // 0x202158: 0xc082662  jal         func_209988
    ctx->pc = 0x202158u;
    SET_GPR_U32(ctx, 31, 0x202160u);
    ctx->pc = 0x209988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209988u, 0x202158u, 0x202160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202160u;
label_202160:
    // 0x202160: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x202160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x202164: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x202164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x202168: 0xc082740  jal         func_209D00
    ctx->pc = 0x202168u;
    SET_GPR_U32(ctx, 31, 0x202170u);
    ctx->pc = 0x209D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209D00u, 0x202168u, 0x202170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202170u;
label_202170:
    // 0x202170: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x202170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x202174: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x202174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x202178: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x202178u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20217c: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x20217cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202180: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x202180u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x202184: 0x247e07b8  addiu       $fp, $v1, 0x7B8
    ctx->pc = 0x202184u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 1976));
    // 0x202188: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x202188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x20218c: 0x0  nop
    ctx->pc = 0x20218cu;
    // NOP
label_202190:
    // 0x202190: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x202190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x202194: 0x24650770  addiu       $a1, $v1, 0x770
    ctx->pc = 0x202194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1904));
    // 0x202198: 0x26170001  addiu       $s7, $s0, 0x1
    ctx->pc = 0x202198u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20219c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20219cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2021a0: 0x24639370  addiu       $v1, $v1, -0x6C90
    ctx->pc = 0x2021a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939504));
    // 0x2021a4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2021a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2021a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2021a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2021ac: 0x2642013c  addiu       $v0, $s2, 0x13C
    ctx->pc = 0x2021acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 316));
    // 0x2021b0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2021b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2021b4: 0x264301f4  addiu       $v1, $s2, 0x1F4
    ctx->pc = 0x2021b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 500));
    // 0x2021b8: 0x264202ac  addiu       $v0, $s2, 0x2AC
    ctx->pc = 0x2021b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 684));
    // 0x2021bc: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2021bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x2021c0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2021C0u;
    SET_GPR_U32(ctx, 31, 0x2021C8u);
    ctx->pc = 0x2021C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021C0u;
    // 0x2021c4: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2021C0u, 0x2021C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021C8u;
label_2021c8:
    // 0x2021c8: 0x264302dc  addiu       $v1, $s2, 0x2DC
    ctx->pc = 0x2021c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 732));
    // 0x2021cc: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x2021ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x2021d0: 0x2643039c  addiu       $v1, $s2, 0x39C
    ctx->pc = 0x2021d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 924));
    // 0x2021d4: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2021D4u;
    {
        const bool branch_taken_0x2021d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2021D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021D4u;
        // 0x2021d8: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021d4) {
            ctx->pc = 0x202308u;
            goto label_202308;
        }
    }
    ctx->pc = 0x2021DCu;
    // 0x2021dc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2021dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2021e0: 0x24639398  addiu       $v1, $v1, -0x6C68
    ctx->pc = 0x2021e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939544));
    // 0x2021e4: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x2021e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2021e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2021e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2021ec: 0x54600047  bnel        $v1, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2021ECu;
    {
        const bool branch_taken_0x2021ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2021ec) {
            ctx->pc = 0x2021F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2021ECu;
            // 0x2021f0: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20230Cu;
            goto label_20230c;
        }
    }
    ctx->pc = 0x2021F4u;
    // 0x2021f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2021f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021f8: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x2021f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x2021fc: 0x24a50468  addiu       $a1, $a1, 0x468
    ctx->pc = 0x2021fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1128));
    // 0x202200: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x202200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202204: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x202204u;
    SET_GPR_U32(ctx, 31, 0x20220Cu);
    ctx->pc = 0x202208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202204u;
    // 0x202208: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x202204u, 0x20220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20220Cu;
label_20220c:
    // 0x20220c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x20220cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x202210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202214: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x202214u;
    SET_GPR_U32(ctx, 31, 0x20221Cu);
    ctx->pc = 0x202218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202214u;
    // 0x202218: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x202214u, 0x20221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20221Cu;
label_20221c:
    // 0x20221c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20221cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x202220: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x202220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202224: 0x244607c0  addiu       $a2, $v0, 0x7C0
    ctx->pc = 0x202224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x202228: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x202228u;
    SET_GPR_U32(ctx, 31, 0x202230u);
    ctx->pc = 0x20222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202228u;
    // 0x20222c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x202228u, 0x202230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202230u;
label_202230:
    // 0x202230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x202230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202234: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x202234u;
    SET_GPR_U32(ctx, 31, 0x20223Cu);
    ctx->pc = 0x202238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202234u;
    // 0x202238: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x202234u, 0x20223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20223Cu;
label_20223c:
    // 0x20223c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202240: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x202240u;
    SET_GPR_U32(ctx, 31, 0x202248u);
    ctx->pc = 0x202244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202240u;
    // 0x202244: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x202240u, 0x202248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202248u;
label_202248:
    // 0x202248: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x202248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20224c: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x20224cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x202250: 0x24a50468  addiu       $a1, $a1, 0x468
    ctx->pc = 0x202250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1128));
    // 0x202254: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x202254u;
    SET_GPR_U32(ctx, 31, 0x20225Cu);
    ctx->pc = 0x202258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202254u;
    // 0x202258: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x202254u, 0x20225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20225Cu;
label_20225c:
    // 0x20225c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x20225cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202260: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x202260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202264: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x202264u;
    SET_GPR_U32(ctx, 31, 0x20226Cu);
    ctx->pc = 0x202268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202264u;
    // 0x202268: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x202264u, 0x20226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20226Cu;
label_20226c:
    // 0x20226c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x20226cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x202270: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x202270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202274: 0x246607c8  addiu       $a2, $v1, 0x7C8
    ctx->pc = 0x202274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1992));
    // 0x202278: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x202278u;
    SET_GPR_U32(ctx, 31, 0x202280u);
    ctx->pc = 0x20227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202278u;
    // 0x20227c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x202278u, 0x202280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202280u;
label_202280:
    // 0x202280: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x202280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202284: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x202284u;
    SET_GPR_U32(ctx, 31, 0x20228Cu);
    ctx->pc = 0x202288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202284u;
    // 0x202288: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x202284u, 0x20228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20228Cu;
label_20228c:
    // 0x20228c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20228cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202290: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x202290u;
    SET_GPR_U32(ctx, 31, 0x202298u);
    ctx->pc = 0x202294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202290u;
    // 0x202294: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x202290u, 0x202298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202298u;
label_202298:
    // 0x202298: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x202298u;
    SET_GPR_U32(ctx, 31, 0x2022A0u);
    ctx->pc = 0x20229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202298u;
    // 0x20229c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x202298u, 0x2022A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022A0u;
label_2022a0:
    // 0x2022a0: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x2022A0u;
    SET_GPR_U32(ctx, 31, 0x2022A8u);
    ctx->pc = 0x2022A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022A0u;
    // 0x2022a4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x2022A0u, 0x2022A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022A8u;
label_2022a8:
    // 0x2022a8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2022a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2022ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2022acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022b0: 0xc080924  jal         func_202490
    ctx->pc = 0x2022B0u;
    SET_GPR_U32(ctx, 31, 0x2022B8u);
    ctx->pc = 0x2022B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022B0u;
    // 0x2022b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202490u, 0x2022B0u, 0x2022B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022B8u;
label_2022b8:
    // 0x2022b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2022B8u;
    {
        const bool branch_taken_0x2022b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022B8u;
        // 0x2022bc: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022b8) {
            ctx->pc = 0x2022D0u;
            goto label_2022d0;
        }
    }
    ctx->pc = 0x2022C0u;
label_2022c0:
    // 0x2022c0: 0xc082662  jal         func_209988
    ctx->pc = 0x2022C0u;
    SET_GPR_U32(ctx, 31, 0x2022C8u);
    ctx->pc = 0x209988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209988u, 0x2022C0u, 0x2022C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022C8u;
label_2022c8:
    // 0x2022c8: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x2022C8u;
    SET_GPR_U32(ctx, 31, 0x2022D0u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x2022C8u, 0x2022D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022D0u;
label_2022d0:
    // 0x2022d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2022d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022d4: 0xc080a12  jal         func_202848
    ctx->pc = 0x2022D4u;
    SET_GPR_U32(ctx, 31, 0x2022DCu);
    ctx->pc = 0x2022D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022D4u;
    // 0x2022d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202848u, 0x2022D4u, 0x2022DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022DCu;
label_2022dc:
    // 0x2022dc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2022DCu;
    {
        const bool branch_taken_0x2022dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022DCu;
        // 0x2022e0: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022dc) {
            ctx->pc = 0x2022C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2022c0;
        }
    }
    ctx->pc = 0x2022E4u;
    // 0x2022e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2022e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022e8: 0xc08093a  jal         func_2024E8
    ctx->pc = 0x2022E8u;
    SET_GPR_U32(ctx, 31, 0x2022F0u);
    ctx->pc = 0x2022ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022E8u;
    // 0x2022ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024E8u, 0x2022E8u, 0x2022F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022F0u;
label_2022f0:
    // 0x2022f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2022f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022f4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2022F4u;
    SET_GPR_U32(ctx, 31, 0x2022FCu);
    ctx->pc = 0x2022F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022F4u;
    // 0x2022f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2022F4u, 0x2022FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022FCu;
label_2022fc:
    // 0x2022fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2022fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202300: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x202300u;
    SET_GPR_U32(ctx, 31, 0x202308u);
    ctx->pc = 0x202304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202300u;
    // 0x202304: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x202300u, 0x202308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202308u;
label_202308:
    // 0x202308: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x202308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20230c:
    // 0x20230c: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x20230cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x202310: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x202310u;
    {
        const bool branch_taken_0x202310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202310u;
        // 0x202314: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202310) {
            ctx->pc = 0x202190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202190;
        }
    }
    ctx->pc = 0x202318u;
    // 0x202318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20231c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20231cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202320: 0xc080b04  jal         func_202C10
    ctx->pc = 0x202320u;
    SET_GPR_U32(ctx, 31, 0x202328u);
    ctx->pc = 0x202324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202320u;
    // 0x202324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C10u, 0x202320u, 0x202328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202328u;
label_202328:
    // 0x202328: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x202328u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x20232c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20232cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202330: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x202330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202334: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x202334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x202338: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x202338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20233c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x20233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_202340:
    // 0x202340: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x202340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x202344: 0x1031021  addu        $v0, $t0, $v1
    ctx->pc = 0x202344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x202348: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x202348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x20234c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202350: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x202350u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x202354: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x202354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x202358: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x202358u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x20235c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x20235cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x202360: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x202360u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x202364: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x202364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x202368: 0x2862002e  slti        $v0, $v1, 0x2E
    ctx->pc = 0x202368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x20236c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20236Cu;
    {
        const bool branch_taken_0x20236c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20236Cu;
        // 0x202370: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20236c) {
            ctx->pc = 0x202340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202340;
        }
    }
    ctx->pc = 0x202374u;
    // 0x202374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202378: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x202378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20237c: 0xa2430004  sb          $v1, 0x4($s2)
    ctx->pc = 0x20237cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x202380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202384: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x202384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x202388: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x202388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20238c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x20238cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x202390: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x202390u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x202394: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x202394u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x202398: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x202398u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20239c: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x20239cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2023a0: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2023a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2023a4: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x2023a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2023a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2023A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2023ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023A8u;
        // 0x2023ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2023A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2023B0u;
}
